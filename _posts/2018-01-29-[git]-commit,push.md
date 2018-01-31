## git commit


### 1. mkdir myfolder
### 2. cd myfolder
### 3. git init
### 4. vi test.txt
### 5. i
### 6. "hello git"
### 7. esc
### 8. :wq
### 9. git status (stage 올리기 전)
### 10. git add test.txt (stage에 올린다)
#### error
warning: LF will be replaced by CRLF in "파일이름"
#### solution
```
윈도우 : $ git config --global core.autocrlf input
맥,리눅스 : $ git config --global core.autocrlf true
```
### 11. git status (stage에 올린 후)
### 12. git commit -m "commit message"



## git push


### 1. git remote add [remoteName] https://github.com/[userID]/[repositoryName]
### 2. git remote -v (원격 저장소명 확인하기)
### 3. git push [remoteName] master


## summary

1. git add .
2. git commit -m 'commit message'
3. git push origin master



