# my-printf

Rewriting printf with few new flags

## GCC Version

4.8.4

## Todo
- [x] Build architecture
- [ ] All functions for printf
- [x] Printf flags system
- [ ] Callback
- [ ] Recursivity
- [ ] Packages
- [ ] Tests ([Criterion](https://github.com/Snaipe/Criterion),
[Unity](https://github.com/ThrowTheSwitch/Unity),
[Greatest](https://github.com/silentbicycle/greatest) )
- [ ] Add [GNU Complexity](https://www.gnu.org/software/complexity/manual/complexity.html)

## Build binary
```bash
[my-printf] $ make && make clean
```

## Run
```bash
[my-printf] $ ./rocket_launch
```

## Build and run 32 on 64 bits
- Requirements:
    - Install : `libc6-dev-i386`
- For build on 32, add `gcc -m32` in Makefile
- Run:
```bash
[my-printf] $ make && make clean
```

## License
MIT. See the [LICENSE](https://github.com/HugoPouliquen/my-printf/blob/master/LICENSE) for more details.

## Contributing
1. Fork it
2. Create your feature branch (git checkout -b my-new-feature)
3. Commit your changes (git commit -am 'Add some feature')
4. Push to the branch (git push origin my-new-feature)
5. Create new Pull Request
