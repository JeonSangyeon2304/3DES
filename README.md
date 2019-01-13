# 3DES
Explanation
---
A program that encrypts the entire file in 3DES by reading the desired file as binary value, and uses ede among many 3des methods. Encrypted files are appended with the extension 3s after the original file name and extension name, and the original file is deleted. If an encrypted file is selected, it will only proceed if the file's extension is 3es, and the encrypted file will be deleted.

Dependency
---
Developed in C++/MFC for Visual Studio 2017 in windows 10 environment, used OPENSSL

Generate Keys
---
The user-input keys are limited, and keys to be used in each method are obtained through the shift operation of the input keys.

How to Use
---
1. Select File
2. Enter the encryption key
3. Encryption via the Encryption button
4. Abolition through the ventriloquize button

3DES
---

설명
---
원하는 파일을 바이너리값으로 읽어서 파일 전체를 3DES방식으로 암호화 하는 프로그램으로 여러 3des 방식중에 ede 방식을 사용한다. 암호화된 파일은 원래 파일명과 확장자 명 뒤에 3es라는 확장자명이 추가로 붙으며 원본 파일은 삭제가 된다. 복호화는 암호화된 파일을 선택했을 시 파일의 확장자명이 3es일 경우에만 진행이 되며, 암호화 된 파일은 삭제가 된다.

의존성
---
windows 10환경, Visual Studio 2017에서 C++/MFC 및 OPENSSL을 사용했다.

키 생성
---
사용자가 입력한 키를 제한적으로 받으며, 각각의 방식마다 사용할 키는 입력받은 키의 shift 연산을 통해 얻는다.

사용법
---
1. 파일선택
2. 암호키 입력
3. 암호화 버튼을 통해 암호화
4. 복호화 버튼을 통해 복호화
