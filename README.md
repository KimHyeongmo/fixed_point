# pcc010-fixedpoint

실전코딩2 - 고정 소수점


### 업데이트 예정 사항
```
1. double, float typecasting의 시간이 예상보다 길게나와 함수 호출을 줄이기 위해 매크로로 전환하는 업데이트가 있을 예정입니다.
2. gcc 컴파일러 사용을 기준으로 archive파일을 불러오기만 하면 되도록 Makefile을 수정하여 archive파일을 생성하도록 할 예정입니다.

```

|        | S10_5체계 | real number | short체계 |
| ------ | ------ | ------ | ------ |
| 최대값 | 1023.96875 | 1023.96875 | 32767 |
| 최소값 | -1024 | -1024 | -32768 |
| 최소차이 | 0.03125 | 0.03125 |  |


## 목차
1. [Function](#function)
2. [Runtime](#runtime)
3. [Accuracy](#accuracy)
4. [Runtime Test Method](#runtime-test-method)
5. [Execution Method](#execution-method)



## Function

* S10_5 체계

| 함수 | 기능 |
| ------ | ------ |
| fixed_to_double(a) | fixed표현 숫자를 double로 형변환 |
| fixed_to_int(a) | fixed표현 숫자를 int로 형변환 |
| fixed_to_float(a) | fixed표현 숫자를 float로 형변환 |
| fixed_to_longlong(a) | fixed표현 숫자를 longlong로 형변환 |
| double_to_fixed(a) | double표현 숫자를 fixed로 형변환 |
| int_to_fixed(a) | int표현 숫자를 fixed로 형변환 |
| float_to_fixed(a) | float표현 숫자를 fixed로 형변환 |
| double_to_fixed(a) | double표현 숫자를 fixed로 형변환 |
| int_sum_s10_5 | fixed의 int합 |
| float_sum_s10_5 | fixed의 float합 |
| longlong_sum_s10_5 | fixed의 longlong합 |
| double_sum_s10_5 | fixed의 double합 |
| int_sub_s10_5 | fixed의 int차 |
| float_sub_s10_5 | fixed의 float차 |
| longlong_sub_s10_5 | fixed의 longlong차 |
| int_mul1_s10_5 | fixed의 int곱1 |
| float_mul1_s10_5 | fixed의 float곱1 |
| longlong_mul1_s10_5 | fixed의 longlong곱1 |
| double_mul1_s10_5 | fixed의 double곱1 |
| int_div1_s10_5 | fixed의 int나누기1 |
| float_div1_s10_5 | fixed의 float나누기1 |
| longlong_div1_s10_5 | fixed의 longlong나누기1 |
| double_div1_s10_5 | fixed의 double나누기1 |
| int_mul2_s10_5 | fixed의 int곱2 |
| longlong_mul2_s10_5 | fixed의 longlong곱2 |
| int_mul3_s10_5 | fixed의 int곱3 |
| longlong_mul3_s10_5 | fixed의 longlong곱3 |
| int_mul4_s10_5 | fixed의 int곱4 |
| longlong_mul4_s10_5 | fixed의 longlong곱4 |
| int_div2_s10_5 | fixed의 int나누기2 |
| longlong_div2_s10_5 | fixed의 longlong나누기2 |
| int_div3_s10_5 | fixed의 int나누기3 |
| longlong_div3_s10_5 | fixed의 longlong나누기3 |



## Runtime

### Profiling Image

* 32bit_compile

![32bit_compile](/uploads/aa682fd6bdf3183444fa146e271d566d/32bit_compile.jpg)

* 64bit_compile

![62bit_compile](/uploads/9a831b81422494dda3efbe897f521fde/62bit_compile.jpg)

### Ranking

* 정수형 변수와 실수형 변수 사이의 연산 속도차이가 일반적으로 2~6배 가량 차이납니다. 해당 부분에 대한 업데이트가 예정되어 있습니다.
* 약간 : 차이가 미미함. 비교적 : 1.4배 이상의 차이를 보임

| sum | time:64 | time:32 |
| ------ | ------ | ------ |
| int | 1 | 2 |
| long long | 2 | 1 |
| float | 3 | 4 |
| double | 4 | 3 |

- 분석

    64bit 컴파일의 경우 int, long long 합이 float와 double에 비해 2~4배 빠른 시간을 보였다.

    32bit 컴파일의 경우 float, double이 int, long long에 비해 27배 가량 늦은 것으로 확인되었다.
    
    int와 long long 간의 연산 속도도 2배가량의 차이가 났다.




| sub | time:64 | time:32 |
| ------ | ------ | ------ |
| int | 1 | 1 |
| long long | 2 | 2 |
| float | 3 | 3 |
| double | 4 | 4 |

- 분석

    64bit 컴파일의 경우 int, long long 차가 float와 double에 비해 3~6배 빠른 시간을 보였다.
    
    32bit 컴파일의 경우 float, double이 int, long long에 비해 26배 가량 늦은 것으로 확인되었다.




| mul1 | time:64 | time:32 |
| ------ | ------ | ------ |
| long long | 1 | 2 |
| int | 2 | 1 |
| double | 3 | 3 |
| float | 4 | 4 |

- 분석

    64bit 컴파일의 경우 int, long long 곱1이 float와 double에 비해 3~10배 빠른 시간을 보였다.

    32bit 컴파일의 경우 float, double이 int, long long에 비해 13~26배 가량 늦은 것으로 확인되었다.

    64bit 컴파일의 경우 long long이 int에 비해 4배가량 빨랐으며, 32bit 컴파일의 경우 int가 long long에 비해 2배가량 빨랐다.




| mul2 | time:64 | time:32 |
| ------ | ------ | ------ |
| long long | 1 | 2 |
| int | 2 | 1 |

- 분석

    64bit 컴파일의 경우 long long이 int에 비해 약간 빠른 시간을 보였으며
    
    32bit 컴파일의 경우 int가 long long에 비해 비교적 빠른 시간을 보였다.
    



| mul3 | time:64 | time:32 |
| ------ | ------ | ------ |
| long long | 1 | 2 |
| int | 2 | 1 |

- 분석

    64bit 컴파일의 경우 long long이 int에 비해 비교적 빠른 시간을 보였으며
    
    32bit 컴파일의 경우 int가 long long에 비해 약간 빠른 시간을 보였다.
    



| mul4 | time:64 | time:32 |
| ------ | ------ | ------ |
| long long | 2 | 2 |
| int | 1 | 1 |

- 분석

    64bit 컴파일의 경우 int가 long long에 비해 약간 빠른 시간을 보였으며
    
    32bit 컴파일의 경우 int가 long long에 비해 비교적 빠른 시간을 보였다.
    



| div1 | time:64 | time:32 |
| ------ | ------ | ------ |
| int | 1 | 2 |
| float | 2 | 3 |
| double | 3 | 4 |
| long long | 4 | 1 |

- 분석

    64bit 컴파일의 경우 int가 다른 타입에 비해 3배 가량 빠른 속도를 보였다. 가장 느린 것이 long long이었다는 것에 주목해야한다.
    
    32bit 컴파일의 경우 long long과 int가 double과 float에 비해 17배 정도 빠른 속도를 보였다.
    



| div2 | time:64 | time:32 |
| ------ | ------ | ------ |
| int | 1 | 1 |
| long long | 2 | 2 |

- 분석

    64bit 컴파일의 경우 int가 long long에 비해 2배가량 빠른 시간을 보였으며
    
    32bit 컴파일의 경우 int가 long long에 비해 비교적 빠른 시간을 보였다.
    



| div3 | time:64 | time:32 |
| ------ | ------ | ------ |
| int | 1 | 1 |
| long long | 2 | 2 |

- 분석

    64bit 컴파일의 경우 int가 long long에 비해 약 3.4배 빠른 시간을 보였으며
    
    32bit 컴파일의 경우 int가 long long에 비해 약간 빠른 시간을 보였다.
    



## Accuracy

### int

![int_정확도](/uploads/71e445d82fc5dd29bc1796443c2a00c3/int_정확도.jpg)

### long long

![long_long_정확도](/uploads/534699f68898dba25bea78f46b360ed2/long_long_정확도.jpg)

### flaot / double

![float_double_정확도](/uploads/9ec10a23d676005613e1f7a04608b597/float_double_정확도.jpg)

## Runtime Test Method

** result 폴더 내의 모든 파일을 다운 받아 사용하고자 하는 코드가 속한 폴더에 옮겨 두십시오!  **

* Result 폴더의 파일을 다운받아 make 실행
    1. Makefile내의 -m32, -m64를 조정하여 컴파일 방식 선택
    2. test 실행 후 gprof을 활용하여 프로파일링

## Execution Method

* Makefile 내부의 test.c 및 test.o의 부분을 사용하고자 하는 파일 명으로 수정
