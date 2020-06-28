function Main(input) {
  input = input.split("\n");
  const i = parseInt(input[0], 10)
  console.log(i+i**2+i**3)
}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));