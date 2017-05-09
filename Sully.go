package main
import (
	"fmt"
	"os"
	"os/exec"
)
const s=`package main
import (
	"fmt"
	"os"
	"os/exec"
)
const s=%c%s%c
func main() {
	i:=%d
	if (os.Args[0] == "./Sully"){
		i++
	}
	i--
	filename:=fmt.Sprintf("Sully_%%d.go", i)
	bin:=fmt.Sprintf("./Sully_%%d", i)
	cmd := exec.Command("go", "build", "-o", bin, filename)
	f, _:=os.Create(filename)
	fmt.Fprintf(f, s, 96, s, 96, i, 10)
	cmd.Run()
	if (i <= 0){
		os.Exit(0) ;
	}
	cmd = exec.Command(bin)
	cmd.Run()
}%c`
func main() {
	i:=5
	if (os.Args[0] == "./Sully"){
		i++
	}
	i--
	filename:=fmt.Sprintf("Sully_%d.go", i)
	bin:=fmt.Sprintf("./Sully_%d", i)
	cmd := exec.Command("go", "build", "-o", bin, filename)
	f, _:=os.Create(filename)
	fmt.Fprintf(f, s, 96, s, 96, i, 10)
	cmd.Run()
	if (i <= 0){
		os.Exit(0) ;
	}
	cmd = exec.Command(bin)
	cmd.Run()
}
