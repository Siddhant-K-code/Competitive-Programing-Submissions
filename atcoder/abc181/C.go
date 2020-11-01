package main

import (
	"bufio"
	"fmt"
	"io"
	"math/big"
	"os"
	"strconv"
)

func main() {
	N := scan.Int()
	xys := make([][]int, N, N)
	for i := range xys {
		xys[i] = []int{scan.Int(), scan.Int()}
	}
	m := map[[3]float64]bool{}
	for i := 0; i < len(xys); i++ {
		for j := i + 1; j < len(xys); j++ {
			dx, dy := xys[j][0]-xys[i][0], xys[j][1]-xys[i][1]
			var unit [3]float64
			if dx == 0 {
				unit = [3]float64{0, 1, float64(xys[i][0])}
			} else if dy == 0 {
				unit = [3]float64{1, 0, float64(xys[i][1])}
			} else {
				v := gcd(dx, dy)
				slope := float64(dy) / float64(dx)
				unit = [3]float64{float64(dx / v), float64(dy / v), float64(xys[i][1]) - slope*float64(xys[i][0])}
			}
			if m[unit] {
				fmt.Println("Yes")
				return
			}
			m[unit] = true
		}
	}
	fmt.Println("No")
}

var scan = newScanner(os.Stdin)

// scanner
type scanner struct {
	*bufio.Scanner
}

func newScanner(r io.Reader) *scanner {
	s := bufio.NewScanner(r)
	s.Split(bufio.ScanWords)
	s.Buffer(nil, 100000000)
	return &scanner{s}
}

func (s *scanner) String() string { s.Scan(); return s.Text() }

func (s *scanner) Strings(n int) []string {
	a := make([]string, n, n)
	for i := range a {
		a[i] = s.String()
	}
	return a
}

func (s *scanner) Int() int { n, _ := strconv.Atoi(s.String()); return n }

func (s *scanner) Ints(n int) []int {
	a := make([]int, n, n)
	for i := range a {
		a[i] = s.Int()
	}
	return a
}

func (s *scanner) Float64() float64 { f, _ := strconv.ParseFloat(s.String(), 64); return f }

func (s *scanner) Float64s(n int) []float64 {
	a := make([]float64, n, n)
	for i := range a {
		a[i] = s.Float64()
	}
	return a
}

func (s *scanner) BigInt() *big.Int { n, _ := new(big.Int).SetString(s.String(), 10); return n }

func (s *scanner) BigInts(n int) []*big.Int {
	a := make([]*big.Int, n, n)
	for i := range a {
		a[i] = s.BigInt()
	}
	return a
}

func iabs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}

func chmax(x *int, v int) {
	if *x < v {
		*x = v
	}
}

func imax(X ...int) int {
	max := X[0]
	for _, x := range X[1:] {
		chmax(&max, x)
	}
	return max
}

func chmin(x *int, v int) {
	if *x > v {
		*x = v
	}
}

func imin(X ...int) int {
	min := X[0]
	for _, x := range X[1:] {
		chmin(&min, x)
	}
	return min
}

func isum(X ...int) int {
	s := 0
	for _, x := range X {
		s += x
	}
	return s
}

func ipow(x, n int) int {
	if n == 0 {
		return 1
	}
	a := ipow(x, n>>1)
	a *= a
	if n&1 != 0 {
		a *= x
	}
	return a
}

func digitNum(x int) int {
	d := 0
	for ; x > 0; x /= 10 {
		d++
	}
	return d
}

func digitSum(x int) int {
	s := 0
	for ; x > 0; x /= 10 {
		s += x % 10
	}
	return s
}

func gcd(a, b int) int {
	if b == 0 {
		return a
	}
	return gcd(b, a%b)
}

func lcm(a, b int) int {
	return a * b / gcd(a, b)
}

func ifact(x int) int {
	f := 1
	for i := 2; i <= x; i++ {
		f *= i
	}
	return f
}

func perm(X []int) [][]int {
	makeCopy := func(X []int) []int { return append(make([]int, 0, len(X)), X...) }
	n := len(X)
	c := makeCopy(X)
	res := append(make([][]int, 0, ifact(n)), makeCopy(c))
	p := make([]int, n+1, n+1)
	for i := 0; i < n+1; i++ {
		p[i] = i
	}
	for i := 1; i < n; {
		p[i]--
		j := 0
		if i%2 == 1 {
			j = p[i]
		}
		c[i], c[j] = c[j], c[i]
		res = append(res, makeCopy(c))
		for i = 1; p[i] == 0; i++ {
			p[i] = i
		}
	}
	return res
}

func factor(n int) map[int]int {
	m := map[int]int{}
	for i := 2; i*i <= n; i++ {
		for n%i == 0 {
			n /= i
			m[i]++
		}
	}
	if n != 1 {
		m[n]++
	}
	return m
}

func isPrime(n int) bool {
	f := factor(n)
	return len(f) == 1 && f[n] == 1
}