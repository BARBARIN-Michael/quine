package main
import "fmt"
import "os"
const name="Grace_kid.go"
const a="package main%cimport %cfmt%c%cimport %cos%c%cconst name=%c%s%c%cconst a=%c%s%c%cfunc main() {%c/*Second comm*/%cf, _:=os.Create(name)%cfmt.Fprintf(f, a, 10, 34, 34, 10, 34, 34, 10, 34, name, 34, 10, 34, a, 34, 10, 10, 10, 10, 10)}%c"
func main() {
/*Second comm*/
f, _:=os.Create(name)
fmt.Fprintf(f, a, 10, 34, 34, 10, 34, 34, 10, 34, name, 34, 10, 34, a, 34, 10, 10, 10, 10, 10)}
