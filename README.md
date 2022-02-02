# modifying.... PLEASE WAIT! ~2022/2/3 23:59

# pcc010-fixedpoint

실전코딩2 - 고정 소수점

## 목차
1. [Function](#function)
2. [Runtime](#runtime)
3. [Accuracy](#accuracy)


|        | S10_5체계 | real number | short체계 |
| ------ | ------ | ------ | ------ |
| 최대값 | 1023.96875 | 1023.96875 | 32767 |
| 최소값 | -1024 | -1024 | -32768 |
| 최소차이 | 0.03125 | 0.03125 |  |

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

* 32bit_compile

![32bit_compile](/uploads/aa682fd6bdf3183444fa146e271d566d/32bit_compile.jpg)

* 64bit_compile

![62bit_compile](/uploads/9a831b81422494dda3efbe897f521fde/62bit_compile.jpg)

| sum | time:64 | time:32 |
| ------ | ------ | ------ |
| int | 0.15 | 0.22 |
| longlong | 0.3 | 0.2 |
| float | 0.61 | 5.41 |
| double | 0.65 | 5.33 |

| sub | time:64 | time:32 |
| ------ | ------ | ------ |
| int | 0.11 | 0.2 |
| longlong | 0.18 | 0.23 |
| float | 0.66 | 5.1 |
| double | 0.68 | 5.21 |

| mul | time:64 | time:32 |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |

| div | time:64 | time:32 |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |


## Accuracy
