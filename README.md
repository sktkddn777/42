## 42 Seoul



## norminette
- [링크](https://github.com/42School/norminette)로 들어가서 순서대로 하면 된다.

- 이후 실행 할 때는 `python3 -m norminette 파일이름.c` 이런 식으로 실행을 해줘야 하고 귀찮으니까 alias를 설정해준다.
```
$ echo 'alias norm="python3 -m norminette"' >> ~/.zshrc
$ source ~/.zshrc
```

## 42header 생성
- vim-plug 설치
```
 curl -fLo ~/.vim/autoload/plug.vim --create-dirs \
 https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
```

- vim 설정 파일을 열고 `vim ~/.vimrc` 42header 플러그인 추가
```
 call plug#begin('~/.vim/plugged')
    Plug 'pbondoer/vim-42header'
 call plug#end()
 
 let g:hdr42user = '인트라아이디'
 let g:hdr42mail = '인트라아이디@student.42seoul.kr'
```

- ~/.vimrc 에다가 :PlugInstall 로 플러그인을 설치하면 된다. 이후 F1 키를 누르면 자동으로 헤더가 생성된다.

<br>

reference : [42서울 과제 편하게 하기](https://velog.io/@seomoon/42-%EC%9C%88%EB%8F%84%EC%9A%B010-wsl2%EC%97%90%EC%84%9C-42%EC%84%9C%EC%9A%B8-%EA%B3%BC%EC%A0%9C-%ED%8E%B8%ED%95%98%EA%B2%8C-%ED%95%98%EA%B8%B0norm-42%ED%97%A4%EB%8D%94-git-config-%EB%93%B1)


## Notion
[Libft](https://www.notion.so/libft-50785566cd7948baa14e7d435cbd1ab1)