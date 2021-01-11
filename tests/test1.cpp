#include "include/library2.h"
#include "include/util.h"
int main()
{
int* timeviewed=new int;
int* classID=new int;
int* courseID=new int;
//Line Number: 0
void *DS1=Init();
//Line Number: 1
ASSERT_TEST(AddCourse(DS1,10)==SUCCESS);
//Line Number: 2
ASSERT_TEST(RemoveCourse(DS1,8)==FAILURE);
//Line Number: 3
ASSERT_TEST(AddCourse(DS1,-2)==INVALID_INPUT);
//Line Number: 4
ASSERT_TEST(AddCourse(DS1,20)==SUCCESS);
//Line Number: 5
ASSERT_TEST(AddCourse(DS1,2)==SUCCESS);
//Line Number: 6
ASSERT_TEST(RemoveCourse(DS1,2)==SUCCESS);
//Line Number: 7
ASSERT_TEST(AddCourse(DS1,2)==SUCCESS);
//Line Number: 8
ASSERT_TEST(RemoveCourse(DS1,-6)==INVALID_INPUT);
//Line Number: 9
ASSERT_TEST(AddCourse(DS1,10)==FAILURE);
//Line Number: 10
ASSERT_TEST(RemoveCourse(DS1,-7)==INVALID_INPUT);
//Line Number: 11
ASSERT_TEST(AddCourse(DS1,1)==SUCCESS);
//Line Number: 12
ASSERT_TEST(RemoveCourse(DS1,7)==FAILURE);
//Line Number: 13
ASSERT_TEST(AddCourse(DS1,17)==SUCCESS);
//Line Number: 14
ASSERT_TEST(AddCourse(DS1,12)==SUCCESS);
//Line Number: 15
ASSERT_TEST(RemoveCourse(DS1,1)==SUCCESS);
//Line Number: 16
ASSERT_TEST(RemoveCourse(DS1,6)==FAILURE);
//Line Number: 17
ASSERT_TEST(AddCourse(DS1,4)==SUCCESS);
//Line Number: 18
ASSERT_TEST(RemoveCourse(DS1,12)==SUCCESS);
//Line Number: 19
ASSERT_TEST(AddCourse(DS1,11)==SUCCESS);
//Line Number: 20
ASSERT_TEST(RemoveCourse(DS1,12)==FAILURE);
//Line Number: 21
ASSERT_TEST(AddCourse(DS1,17)==FAILURE);
//Line Number: 22
ASSERT_TEST(AddCourse(DS1,2)==FAILURE);
//Line Number: 23
ASSERT_TEST(AddCourse(DS1,15)==SUCCESS);
//Line Number: 24
ASSERT_TEST(RemoveCourse(DS1,14)==FAILURE);
//Line Number: 25
ASSERT_TEST(RemoveCourse(DS1,-21)==INVALID_INPUT);
//Line Number: 26
ASSERT_TEST(AddCourse(DS1,9)==SUCCESS);
//Line Number: 27
ASSERT_TEST(AddCourse(DS1,7)==SUCCESS);
//Line Number: 28
ASSERT_TEST(AddCourse(DS1,2)==FAILURE);
//Line Number: 29
ASSERT_TEST(AddCourse(DS1,5)==SUCCESS);
//Line Number: 30
ASSERT_TEST(RemoveCourse(DS1,8)==FAILURE);
//Line Number: 31
ASSERT_TEST(RemoveCourse(DS1,19)==FAILURE);
//Line Number: 32
ASSERT_TEST(AddCourse(DS1,7)==FAILURE);
//Line Number: 33
ASSERT_TEST(RemoveCourse(DS1,8)==FAILURE);
//Line Number: 34
ASSERT_TEST(AddCourse(DS1,15)==FAILURE);
//Line Number: 35
ASSERT_TEST(AddCourse(DS1,20)==FAILURE);
//Line Number: 36
ASSERT_TEST(RemoveCourse(DS1,16)==FAILURE);
//Line Number: 37
ASSERT_TEST(AddCourse(DS1,-32)==INVALID_INPUT);
//Line Number: 38
ASSERT_TEST(AddCourse(DS1,9)==FAILURE);
//Line Number: 39
ASSERT_TEST(RemoveCourse(DS1,10)==SUCCESS);
//Line Number: 40
ASSERT_TEST(AddCourse(DS1,6)==SUCCESS);
//Line Number: 41
ASSERT_TEST(AddCourse(DS1,13)==SUCCESS);
//Line Number: 42
ASSERT_TEST(AddCourse(DS1,12)==SUCCESS);
//Line Number: 43
ASSERT_TEST(AddCourse(DS1,18)==SUCCESS);
//Line Number: 44
ASSERT_TEST(AddCourse(DS1,18)==FAILURE);
//Line Number: 45
ASSERT_TEST(AddCourse(DS1,4)==FAILURE);
//Line Number: 46
ASSERT_TEST(RemoveCourse(DS1,3)==FAILURE);
//Line Number: 47
ASSERT_TEST(RemoveCourse(DS1,18)==SUCCESS);
//Line Number: 48
ASSERT_TEST(RemoveCourse(DS1,3)==FAILURE);
//Line Number: 49
ASSERT_TEST(RemoveCourse(DS1,-43)==INVALID_INPUT);
//Line Number: 50
ASSERT_TEST(AddCourse(DS1,16)==SUCCESS);
//Line Number: 51
ASSERT_TEST(RemoveCourse(DS1,2)==SUCCESS);
//Line Number: 52
ASSERT_TEST(AddCourse(DS1,-45)==INVALID_INPUT);
//Line Number: 53
ASSERT_TEST(RemoveCourse(DS1,12)==SUCCESS);
//Line Number: 54
ASSERT_TEST(RemoveCourse(DS1,17)==SUCCESS);
//Line Number: 55
ASSERT_TEST(AddCourse(DS1,2)==SUCCESS);
//Line Number: 56
ASSERT_TEST(RemoveCourse(DS1,4)==SUCCESS);
//Line Number: 57
ASSERT_TEST(RemoveCourse(DS1,7)==SUCCESS);
//Line Number: 58
ASSERT_TEST(RemoveCourse(DS1,11)==SUCCESS);
//Line Number: 59
ASSERT_TEST(AddCourse(DS1,-51)==INVALID_INPUT);
//Line Number: 60
ASSERT_TEST(AddCourse(DS1,5)==FAILURE);
//Line Number: 61
ASSERT_TEST(RemoveCourse(DS1,16)==SUCCESS);
//Line Number: 62
ASSERT_TEST(RemoveCourse(DS1,-53)==INVALID_INPUT);
//Line Number: 63
ASSERT_TEST(RemoveCourse(DS1,9)==SUCCESS);
//Line Number: 64
ASSERT_TEST(AddCourse(DS1,18)==SUCCESS);
//Line Number: 65
ASSERT_TEST(RemoveCourse(DS1,-55)==INVALID_INPUT);
//Line Number: 66
ASSERT_TEST(RemoveCourse(DS1,7)==FAILURE);
//Line Number: 67
ASSERT_TEST(AddCourse(DS1,5)==FAILURE);
//Line Number: 68
ASSERT_TEST(RemoveCourse(DS1,12)==FAILURE);
//Line Number: 69
ASSERT_TEST(RemoveCourse(DS1,10)==FAILURE);
//Line Number: 70
ASSERT_TEST(AddCourse(DS1,2)==FAILURE);
//Line Number: 71
ASSERT_TEST(RemoveCourse(DS1,3)==FAILURE);
//Line Number: 72
ASSERT_TEST(AddCourse(DS1,-61)==INVALID_INPUT);
//Line Number: 73
ASSERT_TEST(RemoveCourse(DS1,14)==FAILURE);
//Line Number: 74
ASSERT_TEST(AddCourse(DS1,5)==FAILURE);
//Line Number: 75
ASSERT_TEST(AddCourse(DS1,9)==SUCCESS);
//Line Number: 76
ASSERT_TEST(AddCourse(DS1,7)==SUCCESS);
//Line Number: 77
ASSERT_TEST(RemoveCourse(DS1,-65)==INVALID_INPUT);
//Line Number: 78
ASSERT_TEST(RemoveCourse(DS1,2)==SUCCESS);
//Line Number: 79
ASSERT_TEST(RemoveCourse(DS1,11)==FAILURE);
//Line Number: 80
ASSERT_TEST(RemoveCourse(DS1,16)==FAILURE);
//Line Number: 81
ASSERT_TEST(RemoveCourse(DS1,14)==FAILURE);
//Line Number: 82
ASSERT_TEST(RemoveCourse(DS1,7)==SUCCESS);
//Line Number: 83
ASSERT_TEST(AddCourse(DS1,9)==FAILURE);
//Line Number: 84
ASSERT_TEST(RemoveCourse(DS1,3)==FAILURE);
//Line Number: 85
ASSERT_TEST(AddCourse(DS1,19)==SUCCESS);
//Line Number: 86
ASSERT_TEST(RemoveCourse(DS1,8)==FAILURE);
//Line Number: 87
ASSERT_TEST(AddCourse(DS1,6)==FAILURE);
//Line Number: 88
ASSERT_TEST(RemoveCourse(DS1,10)==FAILURE);
//Line Number: 89
ASSERT_TEST(AddCourse(DS1,-76)==INVALID_INPUT);
//Line Number: 90
ASSERT_TEST(AddCourse(DS1,6)==FAILURE);
//Line Number: 91
ASSERT_TEST(AddCourse(DS1,1)==SUCCESS);
//Line Number: 92
ASSERT_TEST(AddCourse(DS1,6)==FAILURE);
//Line Number: 93
ASSERT_TEST(AddCourse(DS1,5)==FAILURE);
//Line Number: 94
ASSERT_TEST(AddCourse(DS1,13)==FAILURE);
//Line Number: 95
ASSERT_TEST(AddCourse(DS1,7)==SUCCESS);
//Line Number: 96
ASSERT_TEST(RemoveCourse(DS1,6)==SUCCESS);
//Line Number: 97
ASSERT_TEST(RemoveCourse(DS1,13)==SUCCESS);
//Line Number: 98
ASSERT_TEST(RemoveCourse(DS1,10)==FAILURE);
//Line Number: 99
ASSERT_TEST(RemoveCourse(DS1,19)==SUCCESS);
//Line Number: 100
ASSERT_TEST(AddCourse(DS1,20)==FAILURE);
//Line Number: 101
ASSERT_TEST(AddCourse(DS1,-87)==INVALID_INPUT);
//Line Number: 102
ASSERT_TEST(RemoveCourse(DS1,18)==SUCCESS);
//Line Number: 103
ASSERT_TEST(AddCourse(DS1,-88)==INVALID_INPUT);
//Line Number: 104
ASSERT_TEST(RemoveCourse(DS1,4)==FAILURE);
//Line Number: 105
ASSERT_TEST(RemoveCourse(DS1,-89)==INVALID_INPUT);
//Line Number: 106
ASSERT_TEST(AddCourse(DS1,1)==FAILURE);
//Line Number: 107
ASSERT_TEST(RemoveCourse(DS1,17)==FAILURE);
//Line Number: 108
ASSERT_TEST(AddCourse(DS1,14)==SUCCESS);
//Line Number: 109
ASSERT_TEST(AddCourse(DS1,2)==SUCCESS);
//Line Number: 110
ASSERT_TEST(RemoveCourse(DS1,4)==FAILURE);
//Line Number: 111
ASSERT_TEST(RemoveCourse(DS1,-94)==INVALID_INPUT);
//Line Number: 112
ASSERT_TEST(AddCourse(DS1,19)==SUCCESS);
//Line Number: 113
ASSERT_TEST(AddCourse(DS1,10)==SUCCESS);
//Line Number: 114
ASSERT_TEST(RemoveCourse(DS1,-96)==INVALID_INPUT);
//Line Number: 115
ASSERT_TEST(AddCourse(DS1,17)==SUCCESS);
//Line Number: 116
ASSERT_TEST(RemoveCourse(DS1,4)==FAILURE);
//Line Number: 117
ASSERT_TEST(AddCourse(DS1,15)==FAILURE);
//Line Number: 118
ASSERT_TEST(RemoveCourse(DS1,19)==SUCCESS);
//Line Number: 119
ASSERT_TEST(AddCourse(DS1,9)==FAILURE);
//Line Number: 120
ASSERT_TEST(AddCourse(DS1,16)==SUCCESS);
//Line Number: 121
ASSERT_TEST(RemoveCourse(DS1,7)==SUCCESS);
//Line Number: 122
ASSERT_TEST(AddCourse(DS1,7)==SUCCESS);
//Line Number: 123
ASSERT_TEST(AddCourse(DS1,17)==FAILURE);
//Line Number: 124
ASSERT_TEST(RemoveCourse(DS1,18)==FAILURE);
//Line Number: 125
ASSERT_TEST(RemoveCourse(DS1,2)==SUCCESS);
//Line Number: 126
ASSERT_TEST(RemoveCourse(DS1,5)==SUCCESS);
//Line Number: 127
ASSERT_TEST(RemoveCourse(DS1,20)==SUCCESS);
//Line Number: 128
ASSERT_TEST(RemoveCourse(DS1,3)==FAILURE);
//Line Number: 129
ASSERT_TEST(AddCourse(DS1,-110)==INVALID_INPUT);
//Line Number: 130
ASSERT_TEST(RemoveCourse(DS1,11)==FAILURE);
//Line Number: 131
ASSERT_TEST(RemoveCourse(DS1,18)==FAILURE);
//Line Number: 132
ASSERT_TEST(RemoveCourse(DS1,4)==FAILURE);
//Line Number: 133
ASSERT_TEST(RemoveCourse(DS1,2)==FAILURE);
//Line Number: 134
ASSERT_TEST(AddCourse(DS1,10)==FAILURE);
//Line Number: 135
ASSERT_TEST(AddCourse(DS1,19)==SUCCESS);
//Line Number: 136
ASSERT_TEST(AddCourse(DS1,12)==SUCCESS);
//Line Number: 137
ASSERT_TEST(AddCourse(DS1,16)==FAILURE);
//Line Number: 138
ASSERT_TEST(RemoveCourse(DS1,7)==SUCCESS);
//Line Number: 139
ASSERT_TEST(RemoveCourse(DS1,9)==SUCCESS);
//Line Number: 140
ASSERT_TEST(AddCourse(DS1,7)==SUCCESS);
//Line Number: 141
ASSERT_TEST(RemoveCourse(DS1,17)==SUCCESS);
//Line Number: 142
ASSERT_TEST(RemoveCourse(DS1,5)==FAILURE);
//Line Number: 143
ASSERT_TEST(AddCourse(DS1,-123)==INVALID_INPUT);
//Line Number: 144
ASSERT_TEST(AddCourse(DS1,14)==FAILURE);
//Line Number: 145
ASSERT_TEST(RemoveCourse(DS1,16)==SUCCESS);
//Line Number: 146
ASSERT_TEST(AddCourse(DS1,6)==SUCCESS);
//Line Number: 147
ASSERT_TEST(RemoveCourse(DS1,18)==FAILURE);
//Line Number: 148
ASSERT_TEST(RemoveCourse(DS1,5)==FAILURE);
//Line Number: 149
ASSERT_TEST(RemoveCourse(DS1,12)==SUCCESS);
//Line Number: 150
ASSERT_TEST(RemoveCourse(DS1,12)==FAILURE);
//Line Number: 151
ASSERT_TEST(AddCourse(DS1,18)==SUCCESS);
//Line Number: 152
ASSERT_TEST(RemoveCourse(DS1,14)==SUCCESS);
//Line Number: 153
ASSERT_TEST(AddCourse(DS1,-132)==INVALID_INPUT);
//Line Number: 154
ASSERT_TEST(RemoveCourse(DS1,11)==FAILURE);
//Line Number: 155
ASSERT_TEST(AddCourse(DS1,16)==SUCCESS);
//Line Number: 156
ASSERT_TEST(AddCourse(DS1,3)==SUCCESS);
//Line Number: 157
ASSERT_TEST(RemoveCourse(DS1,-135)==INVALID_INPUT);
//Line Number: 158
ASSERT_TEST(RemoveCourse(DS1,13)==FAILURE);
//Line Number: 159
ASSERT_TEST(RemoveCourse(DS1,8)==FAILURE);
//Line Number: 160
ASSERT_TEST(RemoveCourse(DS1,16)==SUCCESS);
//Line Number: 161
ASSERT_TEST(AddCourse(DS1,2)==SUCCESS);
//Line Number: 162
ASSERT_TEST(AddCourse(DS1,16)==SUCCESS);
//Line Number: 163
ASSERT_TEST(RemoveCourse(DS1,18)==SUCCESS);
//Line Number: 164
ASSERT_TEST(RemoveCourse(DS1,8)==FAILURE);
//Line Number: 165
ASSERT_TEST(RemoveCourse(DS1,18)==FAILURE);
//Line Number: 166
ASSERT_TEST(RemoveCourse(DS1,5)==FAILURE);
//Line Number: 167
ASSERT_TEST(AddCourse(DS1,20)==SUCCESS);
//Line Number: 168
ASSERT_TEST(RemoveCourse(DS1,8)==FAILURE);
//Line Number: 169
ASSERT_TEST(AddCourse(DS1,5)==SUCCESS);
//Line Number: 170
ASSERT_TEST(RemoveCourse(DS1,6)==SUCCESS);
//Line Number: 171
ASSERT_TEST(AddCourse(DS1,19)==FAILURE);
//Line Number: 172
ASSERT_TEST(RemoveCourse(DS1,15)==SUCCESS);
//Line Number: 173
ASSERT_TEST(AddCourse(DS1,16)==FAILURE);
//Line Number: 174
ASSERT_TEST(RemoveCourse(DS1,3)==SUCCESS);
//Line Number: 175
ASSERT_TEST(AddCourse(DS1,12)==SUCCESS);
//Line Number: 176
ASSERT_TEST(RemoveCourse(DS1,7)==SUCCESS);
//Line Number: 177
ASSERT_TEST(AddCourse(DS1,17)==SUCCESS);
//Line Number: 178
ASSERT_TEST(RemoveCourse(DS1,3)==FAILURE);
//Line Number: 179
ASSERT_TEST(RemoveCourse(DS1,18)==FAILURE);
//Line Number: 180
ASSERT_TEST(AddCourse(DS1,9)==SUCCESS);
//Line Number: 181
ASSERT_TEST(AddCourse(DS1,-158)==INVALID_INPUT);
//Line Number: 182
ASSERT_TEST(RemoveCourse(DS1,2)==SUCCESS);
//Line Number: 183
ASSERT_TEST(AddCourse(DS1,16)==FAILURE);
//Line Number: 184
ASSERT_TEST(RemoveCourse(DS1,4)==FAILURE);
//Line Number: 185
ASSERT_TEST(AddCourse(DS1,18)==SUCCESS);
//Line Number: 186
ASSERT_TEST(RemoveCourse(DS1,1)==SUCCESS);
//Line Number: 187
ASSERT_TEST(RemoveCourse(DS1,20)==SUCCESS);
//Line Number: 188
ASSERT_TEST(AddCourse(DS1,16)==FAILURE);
//Line Number: 189
ASSERT_TEST(AddCourse(DS1,-165)==INVALID_INPUT);
//Line Number: 190
ASSERT_TEST(RemoveCourse(DS1,16)==SUCCESS);
//Line Number: 191
ASSERT_TEST(AddCourse(DS1,2)==SUCCESS);
//Line Number: 192
ASSERT_TEST(AddCourse(DS1,6)==SUCCESS);
//Line Number: 193
ASSERT_TEST(AddCourse(DS1,19)==FAILURE);
//Line Number: 194
ASSERT_TEST(RemoveCourse(DS1,7)==FAILURE);
//Line Number: 195
ASSERT_TEST(AddCourse(DS1,10)==FAILURE);
//Line Number: 196
ASSERT_TEST(RemoveCourse(DS1,19)==SUCCESS);
//Line Number: 197
ASSERT_TEST(AddCourse(DS1,-172)==INVALID_INPUT);
//Line Number: 198
ASSERT_TEST(AddCourse(DS1,11)==SUCCESS);
//Line Number: 199
ASSERT_TEST(RemoveCourse(DS1,2)==SUCCESS);
//Line Number: 200
ASSERT_TEST(RemoveCourse(DS1,15)==FAILURE);
//Line Number: 201
ASSERT_TEST(RemoveCourse(DS1,11)==SUCCESS);
//Line Number: 202
ASSERT_TEST(AddCourse(DS1,4)==SUCCESS);
//Line Number: 203
ASSERT_TEST(RemoveCourse(DS1,1)==FAILURE);
//Line Number: 204
ASSERT_TEST(RemoveCourse(DS1,20)==FAILURE);
//Line Number: 205
ASSERT_TEST(RemoveCourse(DS1,6)==SUCCESS);
//Line Number: 206
ASSERT_TEST(RemoveCourse(DS1,-180)==INVALID_INPUT);
//Line Number: 207
ASSERT_TEST(RemoveCourse(DS1,6)==FAILURE);
//Line Number: 208
ASSERT_TEST(AddCourse(DS1,14)==SUCCESS);
//Line Number: 209
ASSERT_TEST(AddCourse(DS1,5)==FAILURE);
//Line Number: 210
ASSERT_TEST(AddCourse(DS1,18)==FAILURE);
//Line Number: 211
ASSERT_TEST(AddCourse(DS1,12)==FAILURE);
//Line Number: 212
ASSERT_TEST(AddCourse(DS1,14)==FAILURE);
//Line Number: 213
ASSERT_TEST(AddCourse(DS1,18)==FAILURE);
//Line Number: 214
ASSERT_TEST(AddCourse(DS1,-187)==INVALID_INPUT);
//Line Number: 215
ASSERT_TEST(AddCourse(DS1,4)==FAILURE);
//Line Number: 216
ASSERT_TEST(RemoveCourse(DS1,4)==SUCCESS);
//Line Number: 217
ASSERT_TEST(RemoveCourse(DS1,9)==SUCCESS);
//Line Number: 218
ASSERT_TEST(RemoveCourse(DS1,6)==FAILURE);
//Line Number: 219
ASSERT_TEST(AddCourse(DS1,20)==SUCCESS);
//Line Number: 220
ASSERT_TEST(RemoveCourse(DS1,16)==FAILURE);
//Line Number: 221
ASSERT_TEST(RemoveCourse(DS1,13)==FAILURE);
//Line Number: 222
ASSERT_TEST(AddCourse(DS1,4)==SUCCESS);
//Line Number: 223
ASSERT_TEST(AddCourse(DS1,18)==FAILURE);
//Line Number: 224
ASSERT_TEST(RemoveCourse(DS1,7)==FAILURE);
//Line Number: 225
ASSERT_TEST(AddCourse(DS1,4)==FAILURE);
//Line Number: 226
ASSERT_TEST(AddCourse(DS1,13)==SUCCESS);
//Line Number: 227
ASSERT_TEST(AddCourse(DS1,18)==FAILURE);
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
//Line Number: 228
void *DS2=Init();
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@VALID INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Line Number: 229
ASSERT_TEST(AddCourse(DS2,18)==SUCCESS);
//Line Number: 230
ASSERT_TEST(AddCourse(DS2,2)==SUCCESS);
//Line Number: 231
ASSERT_TEST(AddCourse(DS2,17)==SUCCESS);
//Line Number: 232
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 233
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 234
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 235
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 236
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 237
ASSERT_TEST(AddCourse(DS2,6)==SUCCESS);
//Line Number: 238
ASSERT_TEST(AddCourse(DS2,7)==SUCCESS);
//Line Number: 239
ASSERT_TEST(AddCourse(DS2,8)==SUCCESS);
//Line Number: 240
ASSERT_TEST(AddCourse(DS2,11)==SUCCESS);
//Line Number: 241
ASSERT_TEST(AddClass(DS2,11,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 242
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 243
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 244
ASSERT_TEST(AddClass(DS2,8,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 245
ASSERT_TEST(AddClass(DS2,8,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 246
ASSERT_TEST(AddCourse(DS2,3)==SUCCESS);
//Line Number: 247
ASSERT_TEST(AddCourse(DS2,5)==SUCCESS);
//Line Number: 248
ASSERT_TEST(AddCourse(DS2,13)==SUCCESS);
//Line Number: 249
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 250
ASSERT_TEST(AddClass(DS2,11,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 251
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 252
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 253
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 254
ASSERT_TEST(AddCourse(DS2,16)==SUCCESS);
//Line Number: 255
ASSERT_TEST(AddCourse(DS2,19)==SUCCESS);
//Line Number: 256
ASSERT_TEST(AddCourse(DS2,20)==SUCCESS);
//Line Number: 257
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 258
ASSERT_TEST(AddClass(DS2,19,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 259
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 260
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 261
ASSERT_TEST(AddClass(DS2,19,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 262
ASSERT_TEST(AddCourse(DS2,15)==SUCCESS);
//Line Number: 263
ASSERT_TEST(AddCourse(DS2,10)==SUCCESS);
//Line Number: 264
ASSERT_TEST(AddCourse(DS2,4)==SUCCESS);
//Line Number: 265
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 266
ASSERT_TEST(AddClass(DS2,19,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 267
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 268
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 269
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 270
ASSERT_TEST(AddCourse(DS2,1)==SUCCESS);
//Line Number: 271
ASSERT_TEST(AddClass(DS2,8,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 272
ASSERT_TEST(AddClass(DS2,8,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 273
ASSERT_TEST(AddClass(DS2,8,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 274
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 275
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 276
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 277
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 278
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 279
ASSERT_TEST(AddClass(DS2,11,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 280
ASSERT_TEST(AddClass(DS2,11,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 281
ASSERT_TEST(AddClass(DS2,1,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 282
ASSERT_TEST(AddClass(DS2,1,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 283
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 284
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 285
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 286
ASSERT_TEST(AddCourse(DS2,9)==SUCCESS);
//Line Number: 287
ASSERT_TEST(AddCourse(DS2,14)==SUCCESS);
//Line Number: 288
ASSERT_TEST(AddCourse(DS2,12)==SUCCESS);
//Line Number: 289
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 290
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 291
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 292
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 293
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 294
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 295
ASSERT_TEST(AddClass(DS2,11,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 296
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 297
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 298
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 299
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 300
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 301
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 302
ASSERT_TEST(AddClass(DS2,19,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 303
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 304
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 305
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 306
ASSERT_TEST(AddClass(DS2,19,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 307
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 308
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 309
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 310
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 311
ASSERT_TEST(AddClass(DS2,19,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 312
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 313
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 314
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 315
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 316
ASSERT_TEST(AddClass(DS2,1,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 317
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 318
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 319
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 320
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 321
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 322
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 323
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 324
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 325
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 326
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 327
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 328
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 329
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 330
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 331
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 332
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 333
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 334
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 335
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 336
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 337
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 338
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 339
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 340
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 341
ASSERT_TEST(AddClass(DS2,8,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 342
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 343
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 344
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 345
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 346
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 347
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 348
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 349
ASSERT_TEST(AddClass(DS2,19,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 350
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 351
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 352
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 353
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 354
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 355
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 356
ASSERT_TEST(AddClass(DS2,1,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 357
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 358
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 359
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 360
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 361
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 362
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 363
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 364
ASSERT_TEST(AddClass(DS2,1,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 365
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 366
ASSERT_TEST(AddClass(DS2,11,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 367
ASSERT_TEST(AddClass(DS2,19,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 368
ASSERT_TEST(AddClass(DS2,19,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 369
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 370
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 371
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 372
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 373
ASSERT_TEST(AddClass(DS2,11,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 374
ASSERT_TEST(AddClass(DS2,8,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 375
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 376
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 377
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 378
ASSERT_TEST(AddClass(DS2,11,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 379
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 380
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 381
ASSERT_TEST(AddClass(DS2,8,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 382
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 383
ASSERT_TEST(AddClass(DS2,19,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 384
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 385
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 386
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 387
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 388
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ INVALID INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Line Number: 389
ASSERT_TEST(RemoveCourse(DS2,11)==SUCCESS);
//Line Number: 390
ASSERT_TEST(RemoveCourse(DS2,14)==SUCCESS);
//Line Number: 391
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 392
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 393
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 394
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 395
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 396
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 397
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 398
ASSERT_TEST(AddClass(DS2,-19,classID)==INVALID_INPUT);
//Line Number: 399
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 400
ASSERT_TEST(AddClass(DS2,-3,classID)==INVALID_INPUT);
//Line Number: 401
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 402
ASSERT_TEST(AddClass(DS2,-16,classID)==INVALID_INPUT);
//Line Number: 403
ASSERT_TEST(AddClass(DS2,-18,classID)==INVALID_INPUT);
//Line Number: 404
ASSERT_TEST(AddClass(DS2,-15,classID)==INVALID_INPUT);
//Line Number: 405
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 406
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 407
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 408
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 409
ASSERT_TEST(AddClass(DS2,-15,classID)==INVALID_INPUT);
//Line Number: 410
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 411
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 412
ASSERT_TEST(AddClass(DS2,-16,classID)==INVALID_INPUT);
//Line Number: 413
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 414
ASSERT_TEST(AddClass(DS2,-2,classID)==INVALID_INPUT);
//Line Number: 415
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 416
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 417
ASSERT_TEST(AddClass(DS2,-9,classID)==INVALID_INPUT);
//Line Number: 418
ASSERT_TEST(AddClass(DS2,-5,classID)==INVALID_INPUT);
//Line Number: 419
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//Line Number: 420
ASSERT_TEST(AddClass(DS2,-9,classID)==INVALID_INPUT);
//Line Number: 421
ASSERT_TEST(AddClass(DS2,-9,classID)==INVALID_INPUT);
//Line Number: 422
ASSERT_TEST(AddClass(DS2,-10,classID)==INVALID_INPUT);
//Line Number: 423
ASSERT_TEST(AddClass(DS2,-6,classID)==INVALID_INPUT);
//Line Number: 424
ASSERT_TEST(AddClass(DS2,-12,classID)==INVALID_INPUT);
//Line Number: 425
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 426
ASSERT_TEST(AddClass(DS2,-2,classID)==INVALID_INPUT);
//Line Number: 427
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 428
ASSERT_TEST(AddClass(DS2,-18,classID)==INVALID_INPUT);
//Line Number: 429
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 430
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 431
ASSERT_TEST(AddClass(DS2,-4,classID)==INVALID_INPUT);
//Line Number: 432
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 433
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 434
ASSERT_TEST(AddClass(DS2,-3,classID)==INVALID_INPUT);
//Line Number: 435
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 436
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//Line Number: 437
ASSERT_TEST(AddClass(DS2,-20,classID)==INVALID_INPUT);
//Line Number: 438
ASSERT_TEST(AddClass(DS2,-18,classID)==INVALID_INPUT);
//Line Number: 439
ASSERT_TEST(AddClass(DS2,-18,classID)==INVALID_INPUT);
//Line Number: 440
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 441
ASSERT_TEST(AddClass(DS2,-13,classID)==INVALID_INPUT);
//Line Number: 442
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 443
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 444
ASSERT_TEST(AddClass(DS2,-2,classID)==INVALID_INPUT);
//Line Number: 445
ASSERT_TEST(AddClass(DS2,-4,classID)==INVALID_INPUT);
//Line Number: 446
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 447
ASSERT_TEST(AddClass(DS2,-9,classID)==INVALID_INPUT);
//Line Number: 448
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 449
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 450
ASSERT_TEST(AddClass(DS2,-15,classID)==INVALID_INPUT);
//Line Number: 451
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 452
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//Line Number: 453
ASSERT_TEST(AddClass(DS2,-17,classID)==INVALID_INPUT);
//Line Number: 454
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 455
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 456
ASSERT_TEST(AddClass(DS2,-9,classID)==INVALID_INPUT);
//Line Number: 457
ASSERT_TEST(AddClass(DS2,-4,classID)==INVALID_INPUT);
//Line Number: 458
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 459
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 460
ASSERT_TEST(AddClass(DS2,-16,classID)==INVALID_INPUT);
//Line Number: 461
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 462
ASSERT_TEST(AddClass(DS2,-18,classID)==INVALID_INPUT);
//Line Number: 463
ASSERT_TEST(AddClass(DS2,-17,classID)==INVALID_INPUT);
//Line Number: 464
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 465
ASSERT_TEST(AddClass(DS2,-10,classID)==INVALID_INPUT);
//Line Number: 466
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 467
ASSERT_TEST(AddClass(DS2,-1,classID)==INVALID_INPUT);
//Line Number: 468
ASSERT_TEST(AddClass(DS2,-16,classID)==INVALID_INPUT);
//Line Number: 469
ASSERT_TEST(AddClass(DS2,-18,classID)==INVALID_INPUT);
//Line Number: 470
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 471
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 472
ASSERT_TEST(AddClass(DS2,-2,classID)==INVALID_INPUT);
//Line Number: 473
ASSERT_TEST(AddClass(DS2,-1,classID)==INVALID_INPUT);
//Line Number: 474
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 475
ASSERT_TEST(AddClass(DS2,-19,classID)==INVALID_INPUT);
//Line Number: 476
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 477
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 478
ASSERT_TEST(AddClass(DS2,-9,classID)==INVALID_INPUT);
//Line Number: 479
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 480
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 481
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 482
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//Line Number: 483
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 484
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//Line Number: 485
ASSERT_TEST(AddClass(DS2,-15,classID)==INVALID_INPUT);
//Line Number: 486
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 487
ASSERT_TEST(AddClass(DS2,-2,classID)==INVALID_INPUT);
//Line Number: 488
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 489
ASSERT_TEST(AddClass(DS2,-13,classID)==INVALID_INPUT);
//Line Number: 490
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 491
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 492
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 493
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 494
ASSERT_TEST(AddClass(DS2,-7,classID)==INVALID_INPUT);
//Line Number: 495
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 496
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 497
ASSERT_TEST(AddClass(DS2,-16,classID)==INVALID_INPUT);
//Line Number: 498
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 499
ASSERT_TEST(AddClass(DS2,-9,classID)==INVALID_INPUT);
//Line Number: 500
ASSERT_TEST(AddClass(DS2,-12,classID)==INVALID_INPUT);
//Line Number: 501
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 502
ASSERT_TEST(AddClass(DS2,-17,classID)==INVALID_INPUT);
//Line Number: 503
ASSERT_TEST(AddClass(DS2,-2,classID)==INVALID_INPUT);
//Line Number: 504
ASSERT_TEST(AddClass(DS2,-3,classID)==INVALID_INPUT);
//Line Number: 505
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 506
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 507
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 508
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 509
ASSERT_TEST(AddClass(DS2,-20,classID)==INVALID_INPUT);
//Line Number: 510
ASSERT_TEST(AddClass(DS2,-15,classID)==INVALID_INPUT);
//Line Number: 511
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 512
ASSERT_TEST(AddClass(DS2,-16,classID)==INVALID_INPUT);
//Line Number: 513
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//Line Number: 514
ASSERT_TEST(AddClass(DS2,-9,classID)==INVALID_INPUT);
//Line Number: 515
ASSERT_TEST(AddClass(DS2,-16,classID)==INVALID_INPUT);
//Line Number: 516
ASSERT_TEST(AddClass(DS2,-12,classID)==INVALID_INPUT);
//Line Number: 517
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 518
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 519
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//Line Number: 520
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 521
ASSERT_TEST(AddClass(DS2,-6,classID)==INVALID_INPUT);
//Line Number: 522
ASSERT_TEST(AddClass(DS2,-3,classID)==INVALID_INPUT);
//Line Number: 523
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 524
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 525
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 526
ASSERT_TEST(AddClass(DS2,-15,classID)==INVALID_INPUT);
//Line Number: 527
ASSERT_TEST(AddClass(DS2,-9,classID)==INVALID_INPUT);
//Line Number: 528
ASSERT_TEST(AddClass(DS2,-12,classID)==INVALID_INPUT);
//Line Number: 529
ASSERT_TEST(AddClass(DS2,-2,classID)==INVALID_INPUT);
//Line Number: 530
ASSERT_TEST(AddClass(DS2,-3,classID)==INVALID_INPUT);
//Line Number: 531
ASSERT_TEST(AddClass(DS2,-15,classID)==INVALID_INPUT);
//Line Number: 532
ASSERT_TEST(AddClass(DS2,-17,classID)==INVALID_INPUT);
//Line Number: 533
ASSERT_TEST(AddClass(DS2,-10,classID)==INVALID_INPUT);
//Line Number: 534
ASSERT_TEST(AddClass(DS2,-5,classID)==INVALID_INPUT);
//Line Number: 535
ASSERT_TEST(AddClass(DS2,-20,classID)==INVALID_INPUT);
//Line Number: 536
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 537
ASSERT_TEST(AddClass(DS2,-18,classID)==INVALID_INPUT);
//Line Number: 538
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 539
ASSERT_TEST(AddClass(DS2,-7,classID)==INVALID_INPUT);
//Line Number: 540
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 541
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 542
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 543
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 544
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 545
ASSERT_TEST(AddClass(DS2,-17,classID)==INVALID_INPUT);
//Line Number: 546
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 547
ASSERT_TEST(AddClass(DS2,-3,classID)==INVALID_INPUT);
//Line Number: 548
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//Line Number: 549
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 550
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 551
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 552
ASSERT_TEST(AddClass(DS2,-3,classID)==INVALID_INPUT);
//Line Number: 553
ASSERT_TEST(AddClass(DS2,-12,classID)==INVALID_INPUT);
//Line Number: 554
ASSERT_TEST(AddClass(DS2,-4,classID)==INVALID_INPUT);
//Line Number: 555
ASSERT_TEST(AddClass(DS2,-15,classID)==INVALID_INPUT);
//Line Number: 556
ASSERT_TEST(AddClass(DS2,-1,classID)==INVALID_INPUT);
//Line Number: 557
ASSERT_TEST(AddClass(DS2,-15,classID)==INVALID_INPUT);
//Line Number: 558
ASSERT_TEST(AddClass(DS2,-6,classID)==INVALID_INPUT);
//Line Number: 559
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 560
ASSERT_TEST(AddClass(DS2,-17,classID)==INVALID_INPUT);
//Line Number: 561
ASSERT_TEST(AddClass(DS2,-16,classID)==INVALID_INPUT);
//Line Number: 562
ASSERT_TEST(AddClass(DS2,-20,classID)==INVALID_INPUT);
//Line Number: 563
ASSERT_TEST(AddClass(DS2,-19,classID)==INVALID_INPUT);
//Line Number: 564
ASSERT_TEST(AddClass(DS2,-4,classID)==INVALID_INPUT);
//Line Number: 565
ASSERT_TEST(AddClass(DS2,-19,classID)==INVALID_INPUT);
//Line Number: 566
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 567
ASSERT_TEST(AddClass(DS2,-5,classID)==INVALID_INPUT);
//Line Number: 568
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 569
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 570
ASSERT_TEST(AddClass(DS2,-2,classID)==INVALID_INPUT);
//Line Number: 571
ASSERT_TEST(AddClass(DS2,-18,classID)==INVALID_INPUT);
//Line Number: 572
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//Line Number: 573
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 574
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 575
ASSERT_TEST(AddClass(DS2,-20,classID)==INVALID_INPUT);
//Line Number: 576
ASSERT_TEST(AddClass(DS2,-13,classID)==INVALID_INPUT);
//Line Number: 577
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 578
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 579
ASSERT_TEST(AddClass(DS2,-1,classID)==INVALID_INPUT);
//Line Number: 580
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 581
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 582
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 583
ASSERT_TEST(AddClass(DS2,-6,classID)==INVALID_INPUT);
//Line Number: 584
ASSERT_TEST(AddClass(DS2,-2,classID)==INVALID_INPUT);
//Line Number: 585
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 586
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//Line Number: 587
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 588
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 589
ASSERT_TEST(AddClass(DS2,-3,classID)==INVALID_INPUT);
//Line Number: 590
ASSERT_TEST(AddClass(DS2,-6,classID)==INVALID_INPUT);
//Line Number: 591
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 592
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 593
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 594
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//Line Number: 595
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 596
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 597
ASSERT_TEST(AddClass(DS2,-7,classID)==INVALID_INPUT);
//Line Number: 598
ASSERT_TEST(AddClass(DS2,-4,classID)==INVALID_INPUT);
//Line Number: 599
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 600
ASSERT_TEST(AddClass(DS2,-7,classID)==INVALID_INPUT);
//Line Number: 601
ASSERT_TEST(AddClass(DS2,-16,classID)==INVALID_INPUT);
//Line Number: 602
ASSERT_TEST(AddClass(DS2,-10,classID)==INVALID_INPUT);
//Line Number: 603
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 604
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 605
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 606
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 607
ASSERT_TEST(AddClass(DS2,-17,classID)==INVALID_INPUT);
//Line Number: 608
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 609
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 610
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//Line Number: 611
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 612
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 613
ASSERT_TEST(AddClass(DS2,-3,classID)==INVALID_INPUT);
//Line Number: 614
ASSERT_TEST(AddClass(DS2,-12,classID)==INVALID_INPUT);
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@RANDOM INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Line Number: 615
ASSERT_TEST(AddCourse(DS2,10)==FAILURE);
//Line Number: 616
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 617
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 618
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 619
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 620
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 621
ASSERT_TEST(RemoveCourse(DS2,18)==SUCCESS);
//Line Number: 622
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 623
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 624
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 625
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 626
ASSERT_TEST(AddClass(DS2,1,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 627
ASSERT_TEST(AddCourse(DS2,16)==FAILURE);
//Line Number: 628
ASSERT_TEST(AddClass(DS2,-14,classID)==INVALID_INPUT);
//Line Number: 629
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//this one screws me3
//Line Number: 630
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 631
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 632
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 633
ASSERT_TEST(AddCourse(DS2,13)==FAILURE);
//Line Number: 634
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 635
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 636
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 637
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 638
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 639
ASSERT_TEST(AddCourse(DS2,4)==FAILURE);
//Line Number: 640
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 641
ASSERT_TEST(AddClass(DS2,19,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 642
ASSERT_TEST(AddClass(DS2,19,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 643
ASSERT_TEST(AddClass(DS2,8,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 644
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 645
ASSERT_TEST(RemoveCourse(DS2,14)==FAILURE);
//Line Number: 646
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//this one screws me3
//Line Number: 647
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//this one screws me3
//Line Number: 648
ASSERT_TEST(AddClass(DS2,18,classID)==FAILURE);
//Line Number: 649
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//this one screws me3
//Line Number: 650
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 651
ASSERT_TEST(AddCourse(DS2,5)==FAILURE);
//Line Number: 652
ASSERT_TEST(AddClass(DS2,1,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 653
ASSERT_TEST(AddClass(DS2,19,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 654
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 655
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 656
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 657
ASSERT_TEST(RemoveCourse(DS2,19)==SUCCESS);
//Line Number: 658
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 659
ASSERT_TEST(AddClass(DS2,8,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 660
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 661
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 662
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 663
ASSERT_TEST(AddCourse(DS2,18)==SUCCESS);
//Line Number: 664
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==13);
//Line Number: 665
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 666
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==13);
//Line Number: 667
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==14);
//Line Number: 668
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 669
ASSERT_TEST(RemoveCourse(DS2,18)==SUCCESS);
//Line Number: 670
ASSERT_TEST(AddClass(DS2,1,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 671
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==15);
//Line Number: 672
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 673
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==16);
//this one screws me3
//Line Number: 674
ASSERT_TEST(AddClass(DS2,18,classID)==FAILURE);
//Line Number: 675
ASSERT_TEST(AddCourse(DS2,14)==SUCCESS);
//Line Number: 676
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 677
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==17);
//Line Number: 678
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 679
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 680
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 681
ASSERT_TEST(AddCourse(DS2,4)==FAILURE);
//Line Number: 682
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//this one screws me3
//Line Number: 683
ASSERT_TEST(AddClass(DS2,18,classID)==FAILURE);
//Line Number: 684
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 685
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==14);
//this one screws me3
//Line Number: 686
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 687
ASSERT_TEST(AddCourse(DS2,15)==FAILURE);
//Line Number: 688
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//this one screws me3
//Line Number: 689
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//this one screws me3
//Line Number: 690
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 691
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 692
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 693
ASSERT_TEST(AddCourse(DS2,6)==FAILURE);
//this one screws me3
//Line Number: 694
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 695
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==13);
//Line Number: 696
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 697
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 698
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 699
ASSERT_TEST(AddCourse(DS2,2)==FAILURE);
//Line Number: 700
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==14);
//Line Number: 701
ASSERT_TEST(AddClass(DS2,-19,classID)==INVALID_INPUT);
//Line Number: 702
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 703
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 704
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 705
ASSERT_TEST(AddCourse(DS2,9)==FAILURE);
//Line Number: 706
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 707
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 708
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 709
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 710
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 711
ASSERT_TEST(AddCourse(DS2,11)==SUCCESS);
//Line Number: 712
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 713
ASSERT_TEST(AddClass(DS2,1,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 714
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 715
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 716
ASSERT_TEST(AddClass(DS2,-18,classID)==INVALID_INPUT);
//Line Number: 717
ASSERT_TEST(AddCourse(DS2,14)==FAILURE);
//Line Number: 718
ASSERT_TEST(AddClass(DS2,8,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//this one screws me3
//Line Number: 719
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 720
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 721
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 722
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 723
ASSERT_TEST(AddCourse(DS2,11)==FAILURE);
//Line Number: 724
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==15);
//Line Number: 725
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 726
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==13);
//Line Number: 727
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 728
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 729
ASSERT_TEST(RemoveCourse(DS2,18)==FAILURE);
//Line Number: 730
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==13);
//Line Number: 731
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==13);
//Line Number: 732
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==16);
//Line Number: 733
ASSERT_TEST(AddClass(DS2,8,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 734
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==15);
//Line Number: 735
ASSERT_TEST(AddCourse(DS2,11)==FAILURE);
//Line Number: 736
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==16);
//Line Number: 737
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 738
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==14);
//this one screws me3
//Line Number: 739
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 740
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 741
ASSERT_TEST(RemoveCourse(DS2,3)==SUCCESS);
//Line Number: 742
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==17);
//Line Number: 743
ASSERT_TEST(AddClass(DS2,-19,classID)==INVALID_INPUT);
//Line Number: 744
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 745
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==18);
//Line Number: 746
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 747
ASSERT_TEST(RemoveCourse(DS2,12)==SUCCESS);
//Line Number: 748
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==17);
//Line Number: 749
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 750
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 751
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 752
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==14);
//Line Number: 753
ASSERT_TEST(AddCourse(DS2,15)==FAILURE);
//Line Number: 754
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 755
ASSERT_TEST(AddClass(DS2,-19,classID)==INVALID_INPUT);
//Line Number: 756
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==19);
//Line Number: 757
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 758
ASSERT_TEST(AddClass(DS2,11,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 759
ASSERT_TEST(RemoveCourse(DS2,7)==SUCCESS);
//Line Number: 760
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 761
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==18);
//Line Number: 762
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//this one screws me3
//Line Number: 763
ASSERT_TEST(AddClass(DS2,12,classID)==FAILURE);
//Line Number: 764
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==15);
//Line Number: 765
ASSERT_TEST(AddCourse(DS2,6)==FAILURE);
//this one screws me3
//Line Number: 766
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 767
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 768
ASSERT_TEST(AddClass(DS2,1,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//this one screws me3
//Line Number: 769
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 770
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 771
ASSERT_TEST(RemoveCourse(DS2,3)==FAILURE);
//this one screws me3
//Line Number: 772
ASSERT_TEST(AddClass(DS2,18,classID)==FAILURE);
//Line Number: 773
ASSERT_TEST(AddClass(DS2,8,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 774
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==16);
//Line Number: 775
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==14);
//Line Number: 776
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 777
ASSERT_TEST(RemoveCourse(DS2,1)==SUCCESS);
//Line Number: 778
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==18);
//this one screws me3
//Line Number: 779
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 780
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 781
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==19);
//Line Number: 782
ASSERT_TEST(AddClass(DS2,-19,classID)==INVALID_INPUT);
//Line Number: 783
ASSERT_TEST(AddCourse(DS2,4)==FAILURE);
//Line Number: 784
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==13);
//Line Number: 785
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 786
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==19);
//this one screws me3
//Line Number: 787
ASSERT_TEST(AddClass(DS2,3,classID)==FAILURE);
//this one screws me3
//Line Number: 788
ASSERT_TEST(AddClass(DS2,12,classID)==FAILURE);
//Line Number: 789
ASSERT_TEST(RemoveCourse(DS2,14)==SUCCESS);
//Line Number: 790
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==20);
//Line Number: 791
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 792
ASSERT_TEST(AddClass(DS2,8,classID)==SUCCESS);
ASSERT_TEST(*classID==13);
//Line Number: 793
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==21);
//Line Number: 794
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 795
ASSERT_TEST(AddCourse(DS2,20)==FAILURE);
//Line Number: 796
ASSERT_TEST(AddClass(DS2,-14,classID)==INVALID_INPUT);
//this one screws me3
//Line Number: 797
ASSERT_TEST(AddClass(DS2,12,classID)==FAILURE);
//Line Number: 798
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 799
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==17);
//this one screws me3
//Line Number: 800
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 801
ASSERT_TEST(RemoveCourse(DS2,14)==FAILURE);
//Line Number: 802
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==18);
//Line Number: 803
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==19);
//Line Number: 804
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==14);
//Line Number: 805
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==15);
//Line Number: 806
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==15);
//Line Number: 807
ASSERT_TEST(AddCourse(DS2,5)==FAILURE);
//Line Number: 808
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==16);
//Line Number: 809
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==20);
//Line Number: 810
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//this one screws me3
//Line Number: 811
ASSERT_TEST(AddClass(DS2,7,classID)==FAILURE);
//Line Number: 812
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==22);
//Line Number: 813
ASSERT_TEST(AddCourse(DS2,3)==SUCCESS);
//Line Number: 814
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==20);
//Line Number: 815
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 816
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==17);
//this one screws me3
//Line Number: 817
ASSERT_TEST(AddClass(DS2,7,classID)==FAILURE);
//this one screws me3
//Line Number: 818
ASSERT_TEST(AddClass(DS2,18,classID)==FAILURE);
//Line Number: 819
ASSERT_TEST(AddCourse(DS2,4)==FAILURE);
//Line Number: 820
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==18);
//this one screws me3
//Line Number: 821
ASSERT_TEST(AddClass(DS2,12,classID)==FAILURE);
//Line Number: 822
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==19);
//Line Number: 823
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==20);
//Line Number: 824
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 825
ASSERT_TEST(AddCourse(DS2,9)==FAILURE);
//Line Number: 826
ASSERT_TEST(AddClass(DS2,-12,classID)==INVALID_INPUT);
//Line Number: 827
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==21);
//Line Number: 828
ASSERT_TEST(AddClass(DS2,8,classID)==SUCCESS);
ASSERT_TEST(*classID==14);
//this one screws me3
//Line Number: 829
ASSERT_TEST(AddClass(DS2,7,classID)==FAILURE);
//Line Number: 830
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 831
ASSERT_TEST(RemoveCourse(DS2,8)==SUCCESS);
//Line Number: 832
ASSERT_TEST(AddClass(DS2,-18,classID)==INVALID_INPUT);
//Line Number: 833
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==13);
//Line Number: 834
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==22);
//this one screws me3
//Line Number: 835
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//Line Number: 836
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 837
ASSERT_TEST(AddCourse(DS2,16)==FAILURE);
//Line Number: 838
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//this one screws me3
//Line Number: 839
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//Line Number: 840
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==13);
//Line Number: 841
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 842
ASSERT_TEST(AddClass(DS2,11,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 843
ASSERT_TEST(AddCourse(DS2,17)==FAILURE);
//Line Number: 844
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==21);
//Line Number: 845
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==16);
//this one screws me3
//Line Number: 846
ASSERT_TEST(AddClass(DS2,7,classID)==FAILURE);
//Line Number: 847
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//this one screws me3
//Line Number: 848
ASSERT_TEST(AddClass(DS2,12,classID)==FAILURE);
//Line Number: 849
ASSERT_TEST(RemoveCourse(DS2,11)==SUCCESS);
//Line Number: 850
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==22);
//this one screws me3
//Line Number: 851
ASSERT_TEST(AddClass(DS2,7,classID)==FAILURE);
//Line Number: 852
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==14);
//this one screws me3
//Line Number: 853
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 854
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==23);
//Line Number: 855
ASSERT_TEST(AddCourse(DS2,5)==FAILURE);
//Line Number: 856
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 857
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==15);
//Line Number: 858
ASSERT_TEST(AddClass(DS2,-11,classID)==INVALID_INPUT);
//Line Number: 859
ASSERT_TEST(AddClass(DS2,-19,classID)==INVALID_INPUT);
//Line Number: 860
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==20);
//Line Number: 861
ASSERT_TEST(RemoveCourse(DS2,17)==SUCCESS);
//Line Number: 862
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 863
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==13);
//Line Number: 864
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==23);
//Line Number: 865
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==24);
//this one screws me3
//Line Number: 866
ASSERT_TEST(AddClass(DS2,7,classID)==FAILURE);
//Line Number: 867
ASSERT_TEST(AddCourse(DS2,18)==SUCCESS);
//Line Number: 868
ASSERT_TEST(AddClass(DS2,-12,classID)==INVALID_INPUT);
//this one screws me3
//Line Number: 869
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//Line Number: 870
ASSERT_TEST(AddClass(DS2,-17,classID)==INVALID_INPUT);
//this one screws me3
//Line Number: 871
ASSERT_TEST(AddClass(DS2,1,classID)==FAILURE);
//Line Number: 872
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==16);
//Line Number: 873
ASSERT_TEST(AddCourse(DS2,14)==SUCCESS);
//Line Number: 874
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==25);
//Line Number: 875
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==17);
//Line Number: 876
ASSERT_TEST(AddClass(DS2,-1,classID)==INVALID_INPUT);
//Line Number: 877
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==14);
//Line Number: 878
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 879
ASSERT_TEST(AddCourse(DS2,3)==FAILURE);
//this one screws me3
//Line Number: 880
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 881
ASSERT_TEST(AddClass(DS2,-17,classID)==INVALID_INPUT);
//this one screws me3
//Line Number: 882
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//this one screws me3
//Line Number: 883
ASSERT_TEST(AddClass(DS2,12,classID)==FAILURE);
//Line Number: 884
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==18);
//Line Number: 885
ASSERT_TEST(AddCourse(DS2,15)==FAILURE);
//this one screws me3
//Line Number: 886
ASSERT_TEST(AddClass(DS2,1,classID)==FAILURE);
//Line Number: 887
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==15);
//Line Number: 888
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 889
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==14);
//Line Number: 890
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==24);
//Line Number: 891
ASSERT_TEST(RemoveCourse(DS2,4)==SUCCESS);
//Line Number: 892
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//this one screws me3
//Line Number: 893
ASSERT_TEST(AddClass(DS2,17,classID)==FAILURE);
//Line Number: 894
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==23);
//Line Number: 895
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==21);
//Line Number: 896
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 897
ASSERT_TEST(AddCourse(DS2,4)==SUCCESS);
//Line Number: 898
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//this one screws me3
//Line Number: 899
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 900
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==16);
//Line Number: 901
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==24);
//this one screws me3
//Line Number: 902
ASSERT_TEST(AddClass(DS2,1,classID)==FAILURE);
//Line Number: 903
ASSERT_TEST(AddCourse(DS2,7)==SUCCESS);
//Line Number: 904
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==25);
//Line Number: 905
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==13);
//Line Number: 906
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 907
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==26);
//Line Number: 908
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==25);
//Line Number: 909
ASSERT_TEST(AddCourse(DS2,3)==FAILURE);
//Line Number: 910
ASSERT_TEST(AddClass(DS2,5,classID)==SUCCESS);
ASSERT_TEST(*classID==22);
//Line Number: 911
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==14);
//this one screws me3
//Line Number: 912
ASSERT_TEST(AddClass(DS2,1,classID)==FAILURE);
//this one screws me3
//Line Number: 913
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 914
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==15);
//Line Number: 915
ASSERT_TEST(RemoveCourse(DS2,9)==SUCCESS);
//this one screws me3
//Line Number: 916
ASSERT_TEST(AddClass(DS2,12,classID)==FAILURE);
//Line Number: 917
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//this one screws me3
//Line Number: 918
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 919
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//this one screws me3
//Line Number: 920
ASSERT_TEST(AddClass(DS2,9,classID)==FAILURE);
//Line Number: 921
ASSERT_TEST(AddCourse(DS2,7)==FAILURE);
//Line Number: 922
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==27);
//this one screws me3
//Line Number: 923
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 924
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==17);
//Line Number: 925
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==15);
//Line Number: 926
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==28);
//Line Number: 927
ASSERT_TEST(RemoveCourse(DS2,16)==SUCCESS);
//this one screws me3
//Line Number: 928
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 929
ASSERT_TEST(AddClass(DS2,-17,classID)==INVALID_INPUT);
//this one screws me3
//Line Number: 930
ASSERT_TEST(AddClass(DS2,1,classID)==FAILURE);
//Line Number: 931
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==16);
//Line Number: 932
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 933
ASSERT_TEST(AddCourse(DS2,11)==SUCCESS);
//this one screws me3
//Line Number: 934
ASSERT_TEST(AddClass(DS2,9,classID)==FAILURE);
//Line Number: 935
ASSERT_TEST(AddClass(DS2,-12,classID)==INVALID_INPUT);
//this one screws me3
//Line Number: 936
ASSERT_TEST(AddClass(DS2,12,classID)==FAILURE);
//this one screws me3
//Line Number: 937
ASSERT_TEST(AddClass(DS2,9,classID)==FAILURE);
//this one screws me3
//Line Number: 938
ASSERT_TEST(AddClass(DS2,12,classID)==FAILURE);
//Line Number: 939
ASSERT_TEST(RemoveCourse(DS2,9)==FAILURE);
//this one screws me3
//Line Number: 940
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//Line Number: 941
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 942
ASSERT_TEST(AddClass(DS2,-16,classID)==INVALID_INPUT);
//Line Number: 943
ASSERT_TEST(AddClass(DS2,-16,classID)==INVALID_INPUT);
//Line Number: 944
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==18);
//Line Number: 945
ASSERT_TEST(AddCourse(DS2,2)==FAILURE);
//Line Number: 946
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 947
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==21);
//this one screws me3
//Line Number: 948
ASSERT_TEST(AddClass(DS2,1,classID)==FAILURE);
//this one screws me3
//Line Number: 949
ASSERT_TEST(AddClass(DS2,9,classID)==FAILURE);
//Line Number: 950
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==26);
//Line Number: 951
ASSERT_TEST(RemoveCourse(DS2,5)==SUCCESS);
//this one screws me3
//Line Number: 952
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 953
ASSERT_TEST(AddClass(DS2,15,classID)==SUCCESS);
ASSERT_TEST(*classID==27);
//Line Number: 954
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//this one screws me3
//Line Number: 955
ASSERT_TEST(AddClass(DS2,5,classID)==FAILURE);
//Line Number: 956
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 957
ASSERT_TEST(AddCourse(DS2,18)==FAILURE);
//Line Number: 958
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 959
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 960
ASSERT_TEST(AddClass(DS2,-9,classID)==INVALID_INPUT);
//this one screws me3
//Line Number: 961
ASSERT_TEST(AddClass(DS2,12,classID)==FAILURE);
//Line Number: 962
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==17);
//Line Number: 963
ASSERT_TEST(RemoveCourse(DS2,15)==SUCCESS);
//Line Number: 964
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==29);
//this one screws me3
//Line Number: 965
ASSERT_TEST(AddClass(DS2,1,classID)==FAILURE);
//Line Number: 966
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 967
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==18);
//Line Number: 968
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==19);
//Line Number: 969
ASSERT_TEST(RemoveCourse(DS2,14)==SUCCESS);
//Line Number: 970
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==22);
//Line Number: 971
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 972
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==19);
//this one screws me3
//Line Number: 973
ASSERT_TEST(AddClass(DS2,5,classID)==FAILURE);
//Line Number: 974
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 975
ASSERT_TEST(RemoveCourse(DS2,5)==FAILURE);
//Line Number: 976
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==20);
//Line Number: 977
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==23);
//this one screws me3
//Line Number: 978
ASSERT_TEST(AddClass(DS2,9,classID)==FAILURE);
//this one screws me3
//Line Number: 979
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 980
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==26);
//Line Number: 981
ASSERT_TEST(RemoveCourse(DS2,11)==SUCCESS);
//Line Number: 982
ASSERT_TEST(AddClass(DS2,-16,classID)==INVALID_INPUT);
//this one screws me3
//Line Number: 983
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//Line Number: 984
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//this one screws me3
//Line Number: 985
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//this one screws me3
//Line Number: 986
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 987
ASSERT_TEST(AddCourse(DS2,3)==FAILURE);
//this one screws me3
//Line Number: 988
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 989
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==24);
//this one screws me3
//Line Number: 990
ASSERT_TEST(AddClass(DS2,9,classID)==FAILURE);
//this one screws me3
//Line Number: 991
ASSERT_TEST(AddClass(DS2,17,classID)==FAILURE);
//Line Number: 992
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==27);
//Line Number: 993
ASSERT_TEST(RemoveCourse(DS2,19)==FAILURE);
//Line Number: 994
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//this one screws me3
//Line Number: 995
ASSERT_TEST(AddClass(DS2,1,classID)==FAILURE);
//this one screws me3
//Line Number: 996
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 997
ASSERT_TEST(AddClass(DS2,-16,classID)==INVALID_INPUT);
//Line Number: 998
ASSERT_TEST(AddClass(DS2,-1,classID)==INVALID_INPUT);
//Line Number: 999
ASSERT_TEST(AddCourse(DS2,11)==SUCCESS);
//Line Number: 1000
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 1001
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==20);
//Line Number: 1002
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==21);
//Line Number: 1003
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 1004
ASSERT_TEST(AddClass(DS2,11,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1005
ASSERT_TEST(RemoveCourse(DS2,13)==SUCCESS);
//this one screws me3
//Line Number: 1006
ASSERT_TEST(AddClass(DS2,12,classID)==FAILURE);
//Line Number: 1007
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==22);
//this one screws me3
//Line Number: 1008
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//Line Number: 1009
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==30);
//Line Number: 1010
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==23);
//Line Number: 1011
ASSERT_TEST(AddCourse(DS2,17)==SUCCESS);
//Line Number: 1012
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//this one screws me3
//Line Number: 1013
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 1014
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1015
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//this one screws me3
//Line Number: 1016
ASSERT_TEST(AddClass(DS2,16,classID)==FAILURE);
//Line Number: 1017
ASSERT_TEST(AddCourse(DS2,9)==SUCCESS);
//Line Number: 1018
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1019
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1020
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 1021
ASSERT_TEST(AddClass(DS2,-14,classID)==INVALID_INPUT);
//Line Number: 1022
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1023
ASSERT_TEST(AddCourse(DS2,12)==SUCCESS);
//Line Number: 1024
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1025
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1026
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 1027
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//this one screws me3
//Line Number: 1028
ASSERT_TEST(AddClass(DS2,16,classID)==FAILURE);
//Line Number: 1029
ASSERT_TEST(AddCourse(DS2,13)==SUCCESS);
//Line Number: 1030
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//Line Number: 1031
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==31);
//Line Number: 1032
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==24);
//Line Number: 1033
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//this one screws me3
//Line Number: 1034
ASSERT_TEST(AddClass(DS2,15,classID)==FAILURE);
//Line Number: 1035
ASSERT_TEST(RemoveCourse(DS2,10)==SUCCESS);
//Line Number: 1036
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==32);
//Line Number: 1037
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 1038
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//this one screws me3
//Line Number: 1039
ASSERT_TEST(AddClass(DS2,1,classID)==FAILURE);
//Line Number: 1040
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1041
ASSERT_TEST(RemoveCourse(DS2,13)==SUCCESS);
//Line Number: 1042
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//this one screws me3
//Line Number: 1043
ASSERT_TEST(AddClass(DS2,13,classID)==FAILURE);
//Line Number: 1044
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//Line Number: 1045
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==25);
//Line Number: 1046
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 1047
ASSERT_TEST(RemoveCourse(DS2,19)==FAILURE);
//this one screws me3
//Line Number: 1048
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//this one screws me3
//Line Number: 1049
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//Line Number: 1050
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//this one screws me3
//Line Number: 1051
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//Line Number: 1052
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 1053
ASSERT_TEST(AddCourse(DS2,4)==FAILURE);
//Line Number: 1054
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==26);
//Line Number: 1055
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1056
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 1057
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==33);
//Line Number: 1058
ASSERT_TEST(AddClass(DS2,-13,classID)==INVALID_INPUT);
//Line Number: 1059
ASSERT_TEST(AddCourse(DS2,7)==FAILURE);
//Line Number: 1060
ASSERT_TEST(AddClass(DS2,9,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1061
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//this one screws me3
//Line Number: 1062
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 1063
ASSERT_TEST(AddClass(DS2,18,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//this one screws me3
//Line Number: 1064
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//Line Number: 1065
ASSERT_TEST(RemoveCourse(DS2,8)==FAILURE);
//Line Number: 1066
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//this one screws me3
//Line Number: 1067
ASSERT_TEST(AddClass(DS2,5,classID)==FAILURE);
//this one screws me3
//Line Number: 1068
ASSERT_TEST(AddClass(DS2,1,classID)==FAILURE);
//Line Number: 1069
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1070
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==27);
//Line Number: 1071
ASSERT_TEST(AddCourse(DS2,4)==FAILURE);
//this one screws me3
//Line Number: 1072
ASSERT_TEST(AddClass(DS2,15,classID)==FAILURE);
//this one screws me3
//Line Number: 1073
ASSERT_TEST(AddClass(DS2,14,classID)==FAILURE);
//Line Number: 1074
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==34);
//Line Number: 1075
ASSERT_TEST(AddClass(DS2,-1,classID)==INVALID_INPUT);
//Line Number: 1076
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1077
ASSERT_TEST(RemoveCourse(DS2,13)==FAILURE);
//Line Number: 1078
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1079
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==28);
//Line Number: 1080
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 1081
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==29);
//this one screws me3
//Line Number: 1082
ASSERT_TEST(AddClass(DS2,15,classID)==FAILURE);
//Line Number: 1083
ASSERT_TEST(RemoveCourse(DS2,18)==SUCCESS);
//this one screws me3
//Line Number: 1084
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//this one screws me3
//Line Number: 1085
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//this one screws me3
//Line Number: 1086
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//this one screws me3
//Line Number: 1087
ASSERT_TEST(AddClass(DS2,5,classID)==FAILURE);
//this one screws me3
//Line Number: 1088
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 1089
ASSERT_TEST(AddCourse(DS2,16)==SUCCESS);
//Line Number: 1090
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//this one screws me3
//Line Number: 1091
ASSERT_TEST(AddClass(DS2,1,classID)==FAILURE);
//Line Number: 1092
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 1093
ASSERT_TEST(AddClass(DS2,7,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//this one screws me3
//Line Number: 1094
ASSERT_TEST(AddClass(DS2,10,classID)==FAILURE);
//Line Number: 1095
ASSERT_TEST(AddCourse(DS2,16)==FAILURE);
//this one screws me3
//Line Number: 1096
ASSERT_TEST(AddClass(DS2,18,classID)==FAILURE);
//this one screws me3
//Line Number: 1097
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//this one screws me3
//Line Number: 1098
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//Line Number: 1099
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==35);
//Line Number: 1100
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==28);
//Line Number: 1101
ASSERT_TEST(AddCourse(DS2,11)==FAILURE);
//Line Number: 1102
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1103
ASSERT_TEST(AddClass(DS2,11,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1104
ASSERT_TEST(AddClass(DS2,-13,classID)==INVALID_INPUT);
//Line Number: 1105
ASSERT_TEST(AddClass(DS2,-8,classID)==INVALID_INPUT);
//this one screws me3
//Line Number: 1106
ASSERT_TEST(AddClass(DS2,1,classID)==FAILURE);
//Line Number: 1107
ASSERT_TEST(RemoveCourse(DS2,9)==SUCCESS);
//this one screws me3
//Line Number: 1108
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 1109
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==36);
//Line Number: 1110
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==29);
//this one screws me3
//Line Number: 1111
ASSERT_TEST(AddClass(DS2,5,classID)==FAILURE);
//Line Number: 1112
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 1113
ASSERT_TEST(RemoveCourse(DS2,5)==FAILURE);
//this one screws me3
//Line Number: 1114
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 1115
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 1116
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1117
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==37);
//this one screws me3
//Line Number: 1118
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 1119
ASSERT_TEST(AddCourse(DS2,11)==FAILURE);
//Line Number: 1120
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==30);
//this one screws me3
//Line Number: 1121
ASSERT_TEST(AddClass(DS2,10,classID)==FAILURE);
//this one screws me3
//Line Number: 1122
ASSERT_TEST(AddClass(DS2,10,classID)==FAILURE);
//this one screws me3
//Line Number: 1123
ASSERT_TEST(AddClass(DS2,19,classID)==FAILURE);
//Line Number: 1124
ASSERT_TEST(AddClass(DS2,11,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1125
ASSERT_TEST(AddCourse(DS2,14)==SUCCESS);
//Line Number: 1126
ASSERT_TEST(AddClass(DS2,11,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//this one screws me3
//Line Number: 1127
ASSERT_TEST(AddClass(DS2,18,classID)==FAILURE);
//this one screws me3
//Line Number: 1128
ASSERT_TEST(AddClass(DS2,1,classID)==FAILURE);
//Line Number: 1129
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 1130
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==30);
//Line Number: 1131
ASSERT_TEST(AddCourse(DS2,20)==FAILURE);
//Line Number: 1132
ASSERT_TEST(AddClass(DS2,-15,classID)==INVALID_INPUT);
//Line Number: 1133
ASSERT_TEST(AddClass(DS2,-13,classID)==INVALID_INPUT);
//Line Number: 1134
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//this one screws me3
//Line Number: 1135
ASSERT_TEST(AddClass(DS2,15,classID)==FAILURE);
//Line Number: 1136
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 1137
ASSERT_TEST(AddCourse(DS2,11)==FAILURE);
//this one screws me3
//Line Number: 1138
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//Line Number: 1139
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 1140
ASSERT_TEST(AddClass(DS2,11,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1141
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 1142
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==13);
//Line Number: 1143
ASSERT_TEST(RemoveCourse(DS2,1)==FAILURE);
//this one screws me3
//Line Number: 1144
ASSERT_TEST(AddClass(DS2,10,classID)==FAILURE);
//Line Number: 1145
ASSERT_TEST(AddClass(DS2,-13,classID)==INVALID_INPUT);
//this one screws me3
//Line Number: 1146
ASSERT_TEST(AddClass(DS2,13,classID)==FAILURE);
//Line Number: 1147
ASSERT_TEST(AddClass(DS2,-19,classID)==INVALID_INPUT);
//Line Number: 1148
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 1149
ASSERT_TEST(RemoveCourse(DS2,15)==FAILURE);
//Line Number: 1150
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//this one screws me3
//Line Number: 1151
ASSERT_TEST(AddClass(DS2,1,classID)==FAILURE);
//Line Number: 1152
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 1153
ASSERT_TEST(AddClass(DS2,-5,classID)==INVALID_INPUT);
//Line Number: 1154
ASSERT_TEST(AddClass(DS2,-5,classID)==INVALID_INPUT);
//Line Number: 1155
ASSERT_TEST(AddCourse(DS2,16)==FAILURE);
//Line Number: 1156
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//this one screws me3
//Line Number: 1157
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//Line Number: 1158
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 1159
ASSERT_TEST(AddClass(DS2,-10,classID)==INVALID_INPUT);
//Line Number: 1160
ASSERT_TEST(AddClass(DS2,-5,classID)==INVALID_INPUT);
//Line Number: 1161
ASSERT_TEST(RemoveCourse(DS2,11)==SUCCESS);
//Line Number: 1162
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 1163
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1164
ASSERT_TEST(AddClass(DS2,-13,classID)==INVALID_INPUT);
//Line Number: 1165
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==31);
//Line Number: 1166
ASSERT_TEST(AddClass(DS2,-11,classID)==INVALID_INPUT);
//Line Number: 1167
ASSERT_TEST(RemoveCourse(DS2,7)==SUCCESS);
//Line Number: 1168
ASSERT_TEST(AddClass(DS2,17,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 1169
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==14);
//Line Number: 1170
ASSERT_TEST(AddClass(DS2,3,classID)==SUCCESS);
ASSERT_TEST(*classID==15);
//Line Number: 1171
ASSERT_TEST(AddClass(DS2,20,classID)==SUCCESS);
ASSERT_TEST(*classID==31);
//Line Number: 1172
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==38);
//Line Number: 1173
ASSERT_TEST(AddCourse(DS2,10)==SUCCESS);
//Line Number: 1174
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//this one screws me3
//Line Number: 1175
ASSERT_TEST(AddClass(DS2,18,classID)==FAILURE);
//Line Number: 1176
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==39);
//Line Number: 1177
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//this one screws me3
//Line Number: 1178
ASSERT_TEST(AddClass(DS2,5,classID)==FAILURE);
//Line Number: 1179
ASSERT_TEST(AddCourse(DS2,16)==FAILURE);
//Line Number: 1180
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==32);
//this one screws me3
//Line Number: 1181
ASSERT_TEST(AddClass(DS2,18,classID)==FAILURE);
//Line Number: 1182
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==33);
//this one screws me3
//Line Number: 1183
ASSERT_TEST(AddClass(DS2,5,classID)==FAILURE);
//this one screws me3
//Line Number: 1184
ASSERT_TEST(AddClass(DS2,15,classID)==FAILURE);
//Line Number: 1185
ASSERT_TEST(AddCourse(DS2,13)==SUCCESS);
//this one screws me3
//Line Number: 1186
ASSERT_TEST(AddClass(DS2,15,classID)==FAILURE);
//Line Number: 1187
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==40);
//Line Number: 1188
ASSERT_TEST(AddClass(DS2,13,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//this one screws me3
//Line Number: 1189
ASSERT_TEST(AddClass(DS2,9,classID)==FAILURE);
//this one screws me3
//Line Number: 1190
ASSERT_TEST(AddClass(DS2,18,classID)==FAILURE);
//Line Number: 1191
ASSERT_TEST(RemoveCourse(DS2,3)==SUCCESS);
//Line Number: 1192
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==41);
//this one screws me3
//Line Number: 1193
ASSERT_TEST(AddClass(DS2,9,classID)==FAILURE);
//Line Number: 1194
ASSERT_TEST(AddClass(DS2,-1,classID)==INVALID_INPUT);
//Line Number: 1195
ASSERT_TEST(AddClass(DS2,-7,classID)==INVALID_INPUT);
//this one screws me3
//Line Number: 1196
ASSERT_TEST(AddClass(DS2,11,classID)==FAILURE);
//Line Number: 1197
ASSERT_TEST(RemoveCourse(DS2,17)==SUCCESS);
//Line Number: 1198
ASSERT_TEST(AddClass(DS2,4,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 1199
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==34);
//Line Number: 1200
ASSERT_TEST(AddClass(DS2,2,classID)==SUCCESS);
ASSERT_TEST(*classID==35);
//Line Number: 1201
ASSERT_TEST(AddClass(DS2,10,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//this one screws me3
//Line Number: 1202
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//Line Number: 1203
ASSERT_TEST(AddCourse(DS2,12)==FAILURE);
//this one screws me3
//Line Number: 1204
ASSERT_TEST(AddClass(DS2,18,classID)==FAILURE);
//Line Number: 1205
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1206
ASSERT_TEST(AddClass(DS2,16,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1207
ASSERT_TEST(AddClass(DS2,14,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1208
ASSERT_TEST(AddClass(DS2,6,classID)==SUCCESS);
ASSERT_TEST(*classID==42);
//Line Number: 1209
ASSERT_TEST(AddCourse(DS2,1)==SUCCESS);
//this one screws me3
//Line Number: 1210
ASSERT_TEST(AddClass(DS2,8,classID)==FAILURE);
//Line Number: 1211
ASSERT_TEST(AddClass(DS2,12,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//this one screws me3
//Line Number: 1212
ASSERT_TEST(AddClass(DS2,15,classID)==FAILURE);
//this one screws me3
//Line Number: 1213
ASSERT_TEST(AddClass(DS2,18,classID)==FAILURE);
//this one screws me3
//Line Number: 1214
ASSERT_TEST(AddClass(DS2,15,classID)==FAILURE);
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF AddClass Test @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@VALID INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Line Number: 1215
void *DS3=Init();
//Line Number: 1216
ASSERT_TEST(AddCourse(DS3,10)==SUCCESS);
//Line Number: 1217
ASSERT_TEST(AddCourse(DS3,14)==SUCCESS);
//Line Number: 1218
ASSERT_TEST(AddCourse(DS3,12)==SUCCESS);
//Line Number: 1219
ASSERT_TEST(RemoveCourse(DS3,14)==SUCCESS);
//Line Number: 1220
ASSERT_TEST(RemoveCourse(DS3,10)==SUCCESS);
//Line Number: 1221
ASSERT_TEST(AddCourse(DS3,16)==SUCCESS);
//Line Number: 1222
ASSERT_TEST(AddCourse(DS3,15)==SUCCESS);
//Line Number: 1223
ASSERT_TEST(AddCourse(DS3,9)==SUCCESS);
//Line Number: 1224
ASSERT_TEST(AddCourse(DS3,1)==SUCCESS);
//Line Number: 1225
ASSERT_TEST(AddClass(DS3,1,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1226
ASSERT_TEST(AddClass(DS3,15,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1227
ASSERT_TEST(AddClass(DS3,16,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1228
ASSERT_TEST(AddClass(DS3,12,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1229
ASSERT_TEST(AddClass(DS3,15,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1230
ASSERT_TEST(AddClass(DS3,15,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1231
ASSERT_TEST(AddClass(DS3,12,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1232
ASSERT_TEST(AddClass(DS3,15,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1233
ASSERT_TEST(AddClass(DS3,12,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1234
ASSERT_TEST(AddClass(DS3,1,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//this one screws me 1
//Line Number: 1235
ASSERT_TEST(WatchClass(DS3,1,0,10)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,1,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//this one screws me 1
//Line Number: 1236
ASSERT_TEST(WatchClass(DS3,16,0,3)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,16,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==3);
//this one screws me 1
//Line Number: 1237
ASSERT_TEST(WatchClass(DS3,12,0,8)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,12,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//this one screws me 1
//Line Number: 1238
ASSERT_TEST(WatchClass(DS3,15,1,8)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,15,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//this one screws me 1
//Line Number: 1239
ASSERT_TEST(WatchClass(DS3,16,0,6)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,16,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//this one screws me 1
//Line Number: 1240
ASSERT_TEST(WatchClass(DS3,16,0,2)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,16,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==11);
//this one screws me 1
//Line Number: 1241
ASSERT_TEST(WatchClass(DS3,16,0,7)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,16,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//this one screws me 1
//Line Number: 1242
ASSERT_TEST(WatchClass(DS3,16,0,7)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,16,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==25);
//this one screws me 1
//Line Number: 1243
ASSERT_TEST(WatchClass(DS3,15,0,9)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,15,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 1244
ASSERT_TEST(AddCourse(DS3,19)==SUCCESS);
//Line Number: 1245
ASSERT_TEST(AddCourse(DS3,4)==SUCCESS);
//Line Number: 1246
ASSERT_TEST(RemoveCourse(DS3,15)==SUCCESS);
//Line Number: 1247
ASSERT_TEST(AddCourse(DS3,6)==SUCCESS);
//Line Number: 1248
ASSERT_TEST(AddCourse(DS3,13)==SUCCESS);
//Line Number: 1249
ASSERT_TEST(AddCourse(DS3,14)==SUCCESS);
//Line Number: 1250
ASSERT_TEST(AddClass(DS3,1,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1251
ASSERT_TEST(AddClass(DS3,16,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1252
ASSERT_TEST(AddClass(DS3,13,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1253
ASSERT_TEST(AddClass(DS3,1,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1254
ASSERT_TEST(AddClass(DS3,19,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1255
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1256
ASSERT_TEST(AddClass(DS3,12,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1257
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1258
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1259
ASSERT_TEST(AddClass(DS3,4,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//this one screws me 1
//Line Number: 1260
ASSERT_TEST(WatchClass(DS3,13,0,9)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//this one screws me 1
//Line Number: 1261
ASSERT_TEST(WatchClass(DS3,13,0,3)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//this one screws me 1
//Line Number: 1262
ASSERT_TEST(WatchClass(DS3,16,1,9)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,16,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//this one screws me 1
//Line Number: 1263
ASSERT_TEST(WatchClass(DS3,12,0,3)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,12,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==11);
//this one screws me 1
//Line Number: 1264
ASSERT_TEST(WatchClass(DS3,13,0,6)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//this one screws me 1
//Line Number: 1265
ASSERT_TEST(WatchClass(DS3,19,0,7)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,19,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//this one screws me 1
//Line Number: 1266
ASSERT_TEST(WatchClass(DS3,13,0,1)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 1267
ASSERT_TEST(AddCourse(DS3,3)==SUCCESS);
//Line Number: 1268
ASSERT_TEST(AddCourse(DS3,11)==SUCCESS);
//Line Number: 1269
ASSERT_TEST(AddCourse(DS3,15)==SUCCESS);
//Line Number: 1270
ASSERT_TEST(AddCourse(DS3,17)==SUCCESS);
//Line Number: 1271
ASSERT_TEST(RemoveCourse(DS3,4)==SUCCESS);
//Line Number: 1272
ASSERT_TEST(AddClass(DS3,13,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1273
ASSERT_TEST(AddClass(DS3,3,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1274
ASSERT_TEST(AddClass(DS3,17,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1275
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1276
ASSERT_TEST(AddClass(DS3,6,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1277
ASSERT_TEST(AddClass(DS3,13,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1278
ASSERT_TEST(AddClass(DS3,9,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1279
ASSERT_TEST(AddClass(DS3,19,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1280
ASSERT_TEST(AddClass(DS3,17,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1281
ASSERT_TEST(AddClass(DS3,9,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//this one screws me 1
//Line Number: 1282
ASSERT_TEST(WatchClass(DS3,9,0,6)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,9,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//this one screws me 1
//Line Number: 1283
ASSERT_TEST(WatchClass(DS3,3,0,6)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,3,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//this one screws me 1
//Line Number: 1284
ASSERT_TEST(WatchClass(DS3,16,1,4)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,16,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//this one screws me 1
//Line Number: 1285
ASSERT_TEST(WatchClass(DS3,19,0,9)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,19,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//this one screws me 1
//Line Number: 1286
ASSERT_TEST(WatchClass(DS3,13,0,7)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==26);
//this one screws me 1
//Line Number: 1287
ASSERT_TEST(WatchClass(DS3,16,0,5)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,16,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==30);
//this one screws me 1
//Line Number: 1288
ASSERT_TEST(WatchClass(DS3,3,0,5)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,3,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==11);
//this one screws me 1
//Line Number: 1289
ASSERT_TEST(WatchClass(DS3,13,0,9)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==35);
//Line Number: 1290
ASSERT_TEST(RemoveCourse(DS3,6)==SUCCESS);
//Line Number: 1291
ASSERT_TEST(RemoveCourse(DS3,19)==SUCCESS);
//Line Number: 1292
ASSERT_TEST(RemoveCourse(DS3,12)==SUCCESS);
//Line Number: 1293
ASSERT_TEST(AddCourse(DS3,5)==SUCCESS);
//Line Number: 1294
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1295
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 1296
ASSERT_TEST(AddClass(DS3,13,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1297
ASSERT_TEST(AddClass(DS3,17,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1298
ASSERT_TEST(AddClass(DS3,11,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1299
ASSERT_TEST(AddClass(DS3,1,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1300
ASSERT_TEST(AddClass(DS3,17,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1301
ASSERT_TEST(AddClass(DS3,5,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1302
ASSERT_TEST(AddClass(DS3,11,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1303
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//this one screws me 1
//Line Number: 1304
ASSERT_TEST(WatchClass(DS3,3,0,5)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,3,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//this one screws me 1
//Line Number: 1305
ASSERT_TEST(WatchClass(DS3,13,2,1)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//this one screws me 1
//Line Number: 1306
ASSERT_TEST(WatchClass(DS3,1,3,1)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,1,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//this one screws me 1
//Line Number: 1307
ASSERT_TEST(WatchClass(DS3,1,4,1)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,1,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//this one screws me 1
//Line Number: 1308
ASSERT_TEST(WatchClass(DS3,3,0,4)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,3,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//this one screws me 1
//Line Number: 1309
ASSERT_TEST(WatchClass(DS3,1,2,8)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,1,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//this one screws me 1
//Line Number: 1310
ASSERT_TEST(WatchClass(DS3,13,0,7)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==42);
//this one screws me 1
//Line Number: 1311
ASSERT_TEST(WatchClass(DS3,9,0,3)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,9,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//this one screws me 1
//Line Number: 1312
ASSERT_TEST(WatchClass(DS3,5,0,5)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,5,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//this one screws me 1
//Line Number: 1313
ASSERT_TEST(WatchClass(DS3,11,1,9)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,11,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 1314
ASSERT_TEST(AddCourse(DS3,12)==SUCCESS);
//Line Number: 1315
ASSERT_TEST(AddCourse(DS3,2)==SUCCESS);
//Line Number: 1316
ASSERT_TEST(RemoveCourse(DS3,3)==SUCCESS);
//Line Number: 1317
ASSERT_TEST(AddClass(DS3,15,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1318
ASSERT_TEST(AddClass(DS3,16,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1319
ASSERT_TEST(AddClass(DS3,17,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1320
ASSERT_TEST(AddClass(DS3,11,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1321
ASSERT_TEST(AddClass(DS3,9,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1322
ASSERT_TEST(AddClass(DS3,17,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 1323
ASSERT_TEST(AddClass(DS3,13,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1324
ASSERT_TEST(AddClass(DS3,15,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1325
ASSERT_TEST(AddClass(DS3,16,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1326
ASSERT_TEST(AddClass(DS3,1,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//this one screws me 1
//Line Number: 1327
ASSERT_TEST(WatchClass(DS3,17,5,10)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,17,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//this one screws me 1
//Line Number: 1328
ASSERT_TEST(WatchClass(DS3,14,2,9)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,14,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//this one screws me 1
//Line Number: 1329
ASSERT_TEST(WatchClass(DS3,17,5,4)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,17,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//this one screws me 1
//Line Number: 1330
ASSERT_TEST(WatchClass(DS3,14,0,4)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,14,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//this one screws me 1
//Line Number: 1331
ASSERT_TEST(WatchClass(DS3,13,0,9)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==51);
//this one screws me 1
//Line Number: 1332
ASSERT_TEST(WatchClass(DS3,13,2,2)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==3);
//this one screws me 1
//Line Number: 1333
ASSERT_TEST(WatchClass(DS3,17,4,3)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,17,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==3);
//this one screws me 1
//Line Number: 1334
ASSERT_TEST(WatchClass(DS3,14,6,8)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,14,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 1335
ASSERT_TEST(AddCourse(DS3,19)==SUCCESS);
//Line Number: 1336
ASSERT_TEST(AddCourse(DS3,7)==SUCCESS);
//Line Number: 1337
ASSERT_TEST(AddClass(DS3,15,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1338
ASSERT_TEST(AddClass(DS3,16,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1339
ASSERT_TEST(AddClass(DS3,16,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 1340
ASSERT_TEST(AddClass(DS3,9,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1341
ASSERT_TEST(AddClass(DS3,2,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1342
ASSERT_TEST(AddClass(DS3,5,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1343
ASSERT_TEST(AddClass(DS3,12,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1344
ASSERT_TEST(AddClass(DS3,15,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1345
ASSERT_TEST(AddClass(DS3,7,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1346
ASSERT_TEST(AddClass(DS3,7,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//this one screws me 1
//Line Number: 1347
ASSERT_TEST(WatchClass(DS3,2,0,9)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//this one screws me 1
//Line Number: 1348
ASSERT_TEST(WatchClass(DS3,13,2,7)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//this one screws me 1
//Line Number: 1349
ASSERT_TEST(WatchClass(DS3,7,0,4)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,7,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//this one screws me 1
//Line Number: 1350
ASSERT_TEST(WatchClass(DS3,7,1,6)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,7,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//this one screws me 1
//Line Number: 1351
ASSERT_TEST(WatchClass(DS3,2,0,4)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//this one screws me 1
//Line Number: 1352
ASSERT_TEST(WatchClass(DS3,13,4,2)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//this one screws me 1
//Line Number: 1353
ASSERT_TEST(WatchClass(DS3,11,1,8)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,11,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==17);
//this one screws me 1
//Line Number: 1354
ASSERT_TEST(WatchClass(DS3,9,3,2)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,9,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 1355
ASSERT_TEST(RemoveCourse(DS3,16)==SUCCESS);
//Line Number: 1356
ASSERT_TEST(AddCourse(DS3,20)==SUCCESS);
//Line Number: 1357
ASSERT_TEST(AddClass(DS3,7,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1358
ASSERT_TEST(AddClass(DS3,12,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1359
ASSERT_TEST(AddClass(DS3,19,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1360
ASSERT_TEST(AddClass(DS3,5,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1361
ASSERT_TEST(AddClass(DS3,11,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1362
ASSERT_TEST(AddClass(DS3,11,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1363
ASSERT_TEST(AddClass(DS3,20,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1364
ASSERT_TEST(AddClass(DS3,9,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1365
ASSERT_TEST(AddClass(DS3,17,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 1366
ASSERT_TEST(AddClass(DS3,19,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//this one screws me 1
//Line Number: 1367
ASSERT_TEST(WatchClass(DS3,13,1,7)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//this one screws me 1
//Line Number: 1368
ASSERT_TEST(WatchClass(DS3,14,5,4)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,14,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//this one screws me 1
//Line Number: 1369
ASSERT_TEST(WatchClass(DS3,20,0,8)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,20,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//this one screws me 1
//Line Number: 1370
ASSERT_TEST(WatchClass(DS3,15,3,9)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,15,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//this one screws me 1
//Line Number: 1371
ASSERT_TEST(WatchClass(DS3,1,2,5)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,1,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//this one screws me 1
//Line Number: 1372
ASSERT_TEST(WatchClass(DS3,14,2,6)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,14,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//this one screws me 1
//Line Number: 1373
ASSERT_TEST(WatchClass(DS3,9,3,3)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,9,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//this one screws me 1
//Line Number: 1374
ASSERT_TEST(WatchClass(DS3,15,1,2)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,15,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//this one screws me 1
//Line Number: 1375
ASSERT_TEST(WatchClass(DS3,19,0,8)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,19,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//this one screws me 1
//Line Number: 1376
ASSERT_TEST(WatchClass(DS3,17,0,4)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,17,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 1377
ASSERT_TEST(AddCourse(DS3,16)==SUCCESS);
//Line Number: 1378
ASSERT_TEST(AddCourse(DS3,3)==SUCCESS);
//Line Number: 1379
ASSERT_TEST(AddCourse(DS3,18)==SUCCESS);
//Line Number: 1380
ASSERT_TEST(RemoveCourse(DS3,14)==SUCCESS);
//Line Number: 1381
ASSERT_TEST(AddCourse(DS3,10)==SUCCESS);
//Line Number: 1382
ASSERT_TEST(RemoveCourse(DS3,18)==SUCCESS);
//Line Number: 1383
ASSERT_TEST(AddClass(DS3,7,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1384
ASSERT_TEST(AddClass(DS3,1,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 1385
ASSERT_TEST(AddClass(DS3,10,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1386
ASSERT_TEST(AddClass(DS3,9,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 1387
ASSERT_TEST(AddClass(DS3,16,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1388
ASSERT_TEST(AddClass(DS3,3,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1389
ASSERT_TEST(AddClass(DS3,12,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1390
ASSERT_TEST(AddClass(DS3,19,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1391
ASSERT_TEST(AddClass(DS3,12,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1392
ASSERT_TEST(AddClass(DS3,16,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//this one screws me 1
//Line Number: 1393
ASSERT_TEST(WatchClass(DS3,5,0,2)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,5,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//this one screws me 1
//Line Number: 1394
ASSERT_TEST(WatchClass(DS3,17,5,7)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,17,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==21);
//this one screws me 1
//Line Number: 1395
ASSERT_TEST(WatchClass(DS3,1,2,9)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,1,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==22);
//this one screws me 1
//Line Number: 1396
ASSERT_TEST(WatchClass(DS3,12,1,2)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,12,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//this one screws me 1
//Line Number: 1397
ASSERT_TEST(WatchClass(DS3,15,3,2)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,15,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==11);
//this one screws me 1
//Line Number: 1398
ASSERT_TEST(WatchClass(DS3,15,2,1)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,15,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//this one screws me 1
//Line Number: 1399
ASSERT_TEST(WatchClass(DS3,11,3,5)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,11,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//this one screws me 1
//Line Number: 1400
ASSERT_TEST(WatchClass(DS3,5,0,1)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,5,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//this one screws me 1
//Line Number: 1401
ASSERT_TEST(WatchClass(DS3,2,0,9)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==22);
//this one screws me 1
//Line Number: 1402
ASSERT_TEST(WatchClass(DS3,13,0,9)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==60);
//Line Number: 1403
ASSERT_TEST(AddCourse(DS3,8)==SUCCESS);
//Line Number: 1404
ASSERT_TEST(RemoveCourse(DS3,12)==SUCCESS);
//Line Number: 1405
ASSERT_TEST(AddCourse(DS3,14)==SUCCESS);
//Line Number: 1406
ASSERT_TEST(RemoveCourse(DS3,8)==SUCCESS);
//Line Number: 1407
ASSERT_TEST(AddCourse(DS3,6)==SUCCESS);
//Line Number: 1408
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1409
ASSERT_TEST(AddClass(DS3,16,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1410
ASSERT_TEST(AddClass(DS3,11,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 1411
ASSERT_TEST(AddClass(DS3,9,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 1412
ASSERT_TEST(AddClass(DS3,7,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1413
ASSERT_TEST(AddClass(DS3,13,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 1414
ASSERT_TEST(AddClass(DS3,17,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 1415
ASSERT_TEST(AddClass(DS3,7,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 1416
ASSERT_TEST(AddClass(DS3,7,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 1417
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//this one screws me 1
//Line Number: 1418
ASSERT_TEST(WatchClass(DS3,20,0,2)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,20,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//this one screws me 1
//Line Number: 1419
ASSERT_TEST(WatchClass(DS3,5,0,10)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,5,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//this one screws me 1
//Line Number: 1420
ASSERT_TEST(WatchClass(DS3,3,0,4)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,3,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//this one screws me 1
//Line Number: 1421
ASSERT_TEST(WatchClass(DS3,16,2,3)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,16,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==3);
//this one screws me 1
//Line Number: 1422
ASSERT_TEST(WatchClass(DS3,5,1,10)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,5,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//this one screws me 1
//Line Number: 1423
ASSERT_TEST(WatchClass(DS3,7,5,7)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,7,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//this one screws me 1
//Line Number: 1424
ASSERT_TEST(WatchClass(DS3,13,4,1)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==3);
//this one screws me 1
//Line Number: 1425
ASSERT_TEST(WatchClass(DS3,5,2,7)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,5,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//this one screws me 1
//Line Number: 1426
ASSERT_TEST(WatchClass(DS3,14,0,3)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,14,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==3);
//this one screws me 1
//Line Number: 1427
ASSERT_TEST(WatchClass(DS3,10,0,4)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,10,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 1428
ASSERT_TEST(RemoveCourse(DS3,10)==SUCCESS);
//Line Number: 1429
ASSERT_TEST(RemoveCourse(DS3,20)==SUCCESS);
//Line Number: 1430
ASSERT_TEST(RemoveCourse(DS3,2)==SUCCESS);
//Line Number: 1431
ASSERT_TEST(RemoveCourse(DS3,19)==SUCCESS);
//Line Number: 1432
ASSERT_TEST(AddCourse(DS3,20)==SUCCESS);
//Line Number: 1433
ASSERT_TEST(AddClass(DS3,13,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 1434
ASSERT_TEST(AddClass(DS3,9,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 1435
ASSERT_TEST(AddClass(DS3,13,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 1436
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1437
ASSERT_TEST(AddClass(DS3,11,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 1438
ASSERT_TEST(AddClass(DS3,7,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 1439
ASSERT_TEST(AddClass(DS3,3,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1440
ASSERT_TEST(AddClass(DS3,3,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1441
ASSERT_TEST(AddClass(DS3,17,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 1442
ASSERT_TEST(AddClass(DS3,9,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//this one screws me 1
//Line Number: 1443
ASSERT_TEST(WatchClass(DS3,14,0,10)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,14,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//this one screws me 1
//Line Number: 1444
ASSERT_TEST(WatchClass(DS3,15,1,7)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,15,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//this one screws me 1
//Line Number: 1445
ASSERT_TEST(WatchClass(DS3,5,2,7)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,5,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//this one screws me 1
//Line Number: 1446
ASSERT_TEST(WatchClass(DS3,11,1,1)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,11,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//this one screws me 1
//Line Number: 1447
ASSERT_TEST(WatchClass(DS3,9,1,4)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,9,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//this one screws me 1
//Line Number: 1448
ASSERT_TEST(WatchClass(DS3,15,0,3)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,15,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==3);
//this one screws me 1
//Line Number: 1449
ASSERT_TEST(WatchClass(DS3,15,3,5)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,15,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@INVALID INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Line Number: 1450
ASSERT_TEST(WatchClass(DS3,11,-5,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,11,-5,timeviewed)==INVALID_INPUT);
//Line Number: 1451
ASSERT_TEST(WatchClass(DS3,11,5,-5)==INVALID_INPUT);
//Line Number: 1452
ASSERT_TEST(WatchClass(DS3,11,-5,-5)==INVALID_INPUT);
//Line Number: 1453
ASSERT_TEST(WatchClass(DS3,18,-5,-5)==INVALID_INPUT);
//Line Number: 1454
ASSERT_TEST(WatchClass(DS3,18,5,-5)==INVALID_INPUT);
//Line Number: 1455
ASSERT_TEST(WatchClass(DS3,18,-5,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,18,-5,timeviewed)==INVALID_INPUT);
//Line Number: 1456
ASSERT_TEST(WatchClass(DS3,18,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,18,5,timeviewed)==FAILURE);
//Line Number: 1457
ASSERT_TEST(AddCourse(DS3,2)==SUCCESS);
//Line Number: 1458
ASSERT_TEST(AddCourse(DS3,19)==SUCCESS);
//Line Number: 1459
ASSERT_TEST(RemoveCourse(DS3,16)==SUCCESS);
//Line Number: 1460
ASSERT_TEST(RemoveCourse(DS3,3)==SUCCESS);
//Line Number: 1461
ASSERT_TEST(AddCourse(DS3,4)==SUCCESS);
//Line Number: 1462
ASSERT_TEST(AddCourse(DS3,12)==SUCCESS);
//Line Number: 1463
ASSERT_TEST(AddCourse(DS3,10)==SUCCESS);
//Line Number: 1464
ASSERT_TEST(RemoveCourse(DS3,11)==SUCCESS);
//Line Number: 1465
ASSERT_TEST(RemoveCourse(DS3,10)==SUCCESS);
//Line Number: 1466
ASSERT_TEST(RemoveCourse(DS3,6)==SUCCESS);
//Line Number: 1467
ASSERT_TEST(RemoveCourse(DS3,17)==SUCCESS);
//Line Number: 1468
ASSERT_TEST(AddCourse(DS3,11)==SUCCESS);
//Line Number: 1469
ASSERT_TEST(AddClass(DS3,7,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 1470
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1471
ASSERT_TEST(AddClass(DS3,15,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1472
ASSERT_TEST(AddClass(DS3,11,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1473
ASSERT_TEST(AddClass(DS3,5,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1474
ASSERT_TEST(AddClass(DS3,1,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 1475
ASSERT_TEST(AddClass(DS3,2,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1476
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1477
ASSERT_TEST(AddClass(DS3,9,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 1478
ASSERT_TEST(AddClass(DS3,5,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1479
ASSERT_TEST(AddClass(DS3,5,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 1480
ASSERT_TEST(AddClass(DS3,20,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1481
ASSERT_TEST(AddClass(DS3,11,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1482
ASSERT_TEST(AddClass(DS3,20,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1483
ASSERT_TEST(AddClass(DS3,4,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1484
ASSERT_TEST(AddClass(DS3,7,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 1485
ASSERT_TEST(AddClass(DS3,2,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1486
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 1487
ASSERT_TEST(AddClass(DS3,13,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 1488
ASSERT_TEST(AddClass(DS3,15,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 1489
ASSERT_TEST(AddClass(DS3,19,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1490
ASSERT_TEST(AddClass(DS3,15,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 1491
ASSERT_TEST(AddClass(DS3,20,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1492
ASSERT_TEST(AddClass(DS3,5,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 1493
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 1494
ASSERT_TEST(AddClass(DS3,19,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1495
ASSERT_TEST(AddClass(DS3,20,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1496
ASSERT_TEST(AddClass(DS3,20,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1497
ASSERT_TEST(AddClass(DS3,7,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 1498
ASSERT_TEST(AddClass(DS3,5,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 1499
ASSERT_TEST(WatchClass(DS3,18,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,18,5,timeviewed)==FAILURE);
//Line Number: 1500
ASSERT_TEST(WatchClass(DS3,7,16,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,7,16,timeviewed)==INVALID_INPUT);
//Line Number: 1501
ASSERT_TEST(WatchClass(DS3,18,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,18,5,timeviewed)==FAILURE);
//Line Number: 1502
ASSERT_TEST(WatchClass(DS3,14,12,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,14,12,timeviewed)==INVALID_INPUT);
//Line Number: 1503
ASSERT_TEST(WatchClass(DS3,14,12,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,14,12,timeviewed)==INVALID_INPUT);
//Line Number: 1504
ASSERT_TEST(WatchClass(DS3,13,14,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,13,14,timeviewed)==INVALID_INPUT);
//Line Number: 1505
ASSERT_TEST(WatchClass(DS3,12,5,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,12,5,timeviewed)==INVALID_INPUT);
//Line Number: 1506
ASSERT_TEST(WatchClass(DS3,13,14,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,13,14,timeviewed)==INVALID_INPUT);
//Line Number: 1507
ASSERT_TEST(WatchClass(DS3,18,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,18,5,timeviewed)==FAILURE);
//Line Number: 1508
ASSERT_TEST(WatchClass(DS3,3,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,3,5,timeviewed)==FAILURE);
//Line Number: 1509
ASSERT_TEST(WatchClass(DS3,17,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,17,5,timeviewed)==FAILURE);
//Line Number: 1510
ASSERT_TEST(WatchClass(DS3,2,7,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,2,7,timeviewed)==INVALID_INPUT);
//Line Number: 1511
ASSERT_TEST(WatchClass(DS3,8,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,8,5,timeviewed)==FAILURE);
//Line Number: 1512
ASSERT_TEST(WatchClass(DS3,17,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,17,5,timeviewed)==FAILURE);
//Line Number: 1513
ASSERT_TEST(WatchClass(DS3,17,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,17,5,timeviewed)==FAILURE);
//Line Number: 1514
ASSERT_TEST(WatchClass(DS3,10,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,10,5,timeviewed)==FAILURE);
//Line Number: 1515
ASSERT_TEST(WatchClass(DS3,3,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,3,5,timeviewed)==FAILURE);
//Line Number: 1516
ASSERT_TEST(WatchClass(DS3,15,12,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,15,12,timeviewed)==INVALID_INPUT);
//Line Number: 1517
ASSERT_TEST(WatchClass(DS3,9,15,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,9,15,timeviewed)==INVALID_INPUT);
//Line Number: 1518
ASSERT_TEST(WatchClass(DS3,11,7,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,11,7,timeviewed)==INVALID_INPUT);
//Line Number: 1519
ASSERT_TEST(WatchClass(DS3,3,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,3,5,timeviewed)==FAILURE);
//Line Number: 1520
ASSERT_TEST(WatchClass(DS3,15,12,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,15,12,timeviewed)==INVALID_INPUT);
//Line Number: 1521
ASSERT_TEST(WatchClass(DS3,18,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,18,5,timeviewed)==FAILURE);
//Line Number: 1522
ASSERT_TEST(WatchClass(DS3,16,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,16,5,timeviewed)==FAILURE);
//Line Number: 1523
ASSERT_TEST(WatchClass(DS3,10,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,10,5,timeviewed)==FAILURE);
//Line Number: 1524
ASSERT_TEST(WatchClass(DS3,19,7,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,19,7,timeviewed)==INVALID_INPUT);
//Line Number: 1525
ASSERT_TEST(WatchClass(DS3,19,7,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,19,7,timeviewed)==INVALID_INPUT);
//Line Number: 1526
ASSERT_TEST(WatchClass(DS3,15,12,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,15,12,timeviewed)==INVALID_INPUT);
//Line Number: 1527
ASSERT_TEST(WatchClass(DS3,19,7,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,19,7,timeviewed)==INVALID_INPUT);
//Line Number: 1528
ASSERT_TEST(WatchClass(DS3,20,10,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,20,10,timeviewed)==INVALID_INPUT);
//Line Number: 1529
ASSERT_TEST(WatchClass(DS3,20,-5,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,20,-5,timeviewed)==INVALID_INPUT);
//Line Number: 1530
ASSERT_TEST(WatchClass(DS3,20,5,-5)==INVALID_INPUT);
//Line Number: 1531
ASSERT_TEST(WatchClass(DS3,20,-5,-5)==INVALID_INPUT);
//Line Number: 1532
ASSERT_TEST(WatchClass(DS3,16,-5,-5)==INVALID_INPUT);
//Line Number: 1533
ASSERT_TEST(WatchClass(DS3,16,5,-5)==INVALID_INPUT);
//Line Number: 1534
ASSERT_TEST(WatchClass(DS3,16,-5,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,16,-5,timeviewed)==INVALID_INPUT);
//Line Number: 1535
ASSERT_TEST(WatchClass(DS3,16,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,16,5,timeviewed)==FAILURE);
//Line Number: 1536
ASSERT_TEST(RemoveCourse(DS3,12)==SUCCESS);
//Line Number: 1537
ASSERT_TEST(RemoveCourse(DS3,1)==SUCCESS);
//Line Number: 1538
ASSERT_TEST(AddCourse(DS3,8)==SUCCESS);
//Line Number: 1539
ASSERT_TEST(AddCourse(DS3,10)==SUCCESS);
//Line Number: 1540
ASSERT_TEST(AddCourse(DS3,3)==SUCCESS);
//Line Number: 1541
ASSERT_TEST(AddCourse(DS3,12)==SUCCESS);
//Line Number: 1542
ASSERT_TEST(RemoveCourse(DS3,3)==SUCCESS);
//Line Number: 1543
ASSERT_TEST(RemoveCourse(DS3,8)==SUCCESS);
//Line Number: 1544
ASSERT_TEST(AddClass(DS3,12,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1545
ASSERT_TEST(AddClass(DS3,9,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 1546
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 1547
ASSERT_TEST(AddClass(DS3,12,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1548
ASSERT_TEST(AddClass(DS3,20,classID)==SUCCESS);
ASSERT_TEST(*classID==5);
//Line Number: 1549
ASSERT_TEST(AddClass(DS3,10,classID)==SUCCESS);
ASSERT_TEST(*classID==0);
//Line Number: 1550
ASSERT_TEST(AddClass(DS3,10,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1551
ASSERT_TEST(AddClass(DS3,12,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1552
ASSERT_TEST(AddClass(DS3,4,classID)==SUCCESS);
ASSERT_TEST(*classID==1);
//Line Number: 1553
ASSERT_TEST(AddClass(DS3,19,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1554
ASSERT_TEST(AddClass(DS3,9,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 1555
ASSERT_TEST(AddClass(DS3,15,classID)==SUCCESS);
ASSERT_TEST(*classID==7);
//Line Number: 1556
ASSERT_TEST(AddClass(DS3,2,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1557
ASSERT_TEST(AddClass(DS3,9,classID)==SUCCESS);
ASSERT_TEST(*classID==12);
//Line Number: 1558
ASSERT_TEST(AddClass(DS3,7,classID)==SUCCESS);
ASSERT_TEST(*classID==11);
//Line Number: 1559
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 1560
ASSERT_TEST(AddClass(DS3,10,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1561
ASSERT_TEST(AddClass(DS3,5,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 1562
ASSERT_TEST(AddClass(DS3,12,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1563
ASSERT_TEST(AddClass(DS3,20,classID)==SUCCESS);
ASSERT_TEST(*classID==6);
//Line Number: 1564
ASSERT_TEST(AddClass(DS3,15,classID)==SUCCESS);
ASSERT_TEST(*classID==8);
//Line Number: 1565
ASSERT_TEST(AddClass(DS3,9,classID)==SUCCESS);
ASSERT_TEST(*classID==13);
//Line Number: 1566
ASSERT_TEST(AddClass(DS3,11,classID)==SUCCESS);
ASSERT_TEST(*classID==2);
//Line Number: 1567
ASSERT_TEST(AddClass(DS3,5,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 1568
ASSERT_TEST(AddClass(DS3,12,classID)==SUCCESS);
ASSERT_TEST(*classID==4);
//Line Number: 1569
ASSERT_TEST(AddClass(DS3,15,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 1570
ASSERT_TEST(AddClass(DS3,15,classID)==SUCCESS);
ASSERT_TEST(*classID==10);
//Line Number: 1571
ASSERT_TEST(AddClass(DS3,10,classID)==SUCCESS);
ASSERT_TEST(*classID==3);
//Line Number: 1572
ASSERT_TEST(AddClass(DS3,14,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 1573
ASSERT_TEST(AddClass(DS3,13,classID)==SUCCESS);
ASSERT_TEST(*classID==9);
//Line Number: 1574
ASSERT_TEST(WatchClass(DS3,7,17,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,7,17,timeviewed)==INVALID_INPUT);
//Line Number: 1575
ASSERT_TEST(WatchClass(DS3,8,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,8,5,timeviewed)==FAILURE);
//Line Number: 1576
ASSERT_TEST(WatchClass(DS3,8,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,8,5,timeviewed)==FAILURE);
//Line Number: 1577
ASSERT_TEST(WatchClass(DS3,18,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,18,5,timeviewed)==FAILURE);
//Line Number: 1578
ASSERT_TEST(WatchClass(DS3,2,8,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,2,8,timeviewed)==INVALID_INPUT);
//Line Number: 1579
ASSERT_TEST(WatchClass(DS3,16,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,16,5,timeviewed)==FAILURE);
//Line Number: 1580
ASSERT_TEST(WatchClass(DS3,10,9,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,10,9,timeviewed)==INVALID_INPUT);
//Line Number: 1581
ASSERT_TEST(WatchClass(DS3,17,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,17,5,timeviewed)==FAILURE);
//Line Number: 1582
ASSERT_TEST(WatchClass(DS3,20,12,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,20,12,timeviewed)==INVALID_INPUT);
//Line Number: 1583
ASSERT_TEST(WatchClass(DS3,16,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,16,5,timeviewed)==FAILURE);
//Line Number: 1584
ASSERT_TEST(WatchClass(DS3,7,17,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,7,17,timeviewed)==INVALID_INPUT);
//Line Number: 1585
ASSERT_TEST(WatchClass(DS3,1,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,1,5,timeviewed)==FAILURE);
//Line Number: 1586
ASSERT_TEST(WatchClass(DS3,17,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,17,5,timeviewed)==FAILURE);
//Line Number: 1587
ASSERT_TEST(WatchClass(DS3,18,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,18,5,timeviewed)==FAILURE);
//Line Number: 1588
ASSERT_TEST(WatchClass(DS3,3,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,3,5,timeviewed)==FAILURE);
//Line Number: 1589
ASSERT_TEST(WatchClass(DS3,14,15,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,14,15,timeviewed)==INVALID_INPUT);
//Line Number: 1590
ASSERT_TEST(WatchClass(DS3,16,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,16,5,timeviewed)==FAILURE);
//Line Number: 1591
ASSERT_TEST(WatchClass(DS3,4,7,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,4,7,timeviewed)==INVALID_INPUT);
//Line Number: 1592
ASSERT_TEST(WatchClass(DS3,1,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,1,5,timeviewed)==FAILURE);
//Line Number: 1593
ASSERT_TEST(WatchClass(DS3,17,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,17,5,timeviewed)==FAILURE);
//Line Number: 1594
ASSERT_TEST(WatchClass(DS3,5,15,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,5,15,timeviewed)==INVALID_INPUT);
//Line Number: 1595
ASSERT_TEST(WatchClass(DS3,17,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,17,5,timeviewed)==FAILURE);
//Line Number: 1596
ASSERT_TEST(WatchClass(DS3,13,15,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,13,15,timeviewed)==INVALID_INPUT);
//Line Number: 1597
ASSERT_TEST(WatchClass(DS3,17,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,17,5,timeviewed)==FAILURE);
//Line Number: 1598
ASSERT_TEST(WatchClass(DS3,6,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,6,5,timeviewed)==FAILURE);
//Line Number: 1599
ASSERT_TEST(WatchClass(DS3,17,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,17,5,timeviewed)==FAILURE);
//Line Number: 1600
ASSERT_TEST(WatchClass(DS3,6,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,6,5,timeviewed)==FAILURE);
//Line Number: 1601
ASSERT_TEST(WatchClass(DS3,12,10,5)==INVALID_INPUT);
ASSERT_TEST(TimeViewed(DS3,12,10,timeviewed)==INVALID_INPUT);
//Line Number: 1602
ASSERT_TEST(WatchClass(DS3,8,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,8,5,timeviewed)==FAILURE);
//Line Number: 1603
ASSERT_TEST(WatchClass(DS3,6,5,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,6,5,timeviewed)==FAILURE);
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@GETITH INSERTS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Line Number: 1604
ASSERT_TEST(WatchClass(DS3,1,0,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,1,0,timeviewed)==FAILURE);
//Line Number: 1605
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==0);
//Line Number: 1606
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1607
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1608
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1609
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==7);
ASSERT_TEST(*classID==5);
//Line Number: 1610
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==7);
ASSERT_TEST(*classID==1);
//Line Number: 1611
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1612
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1613
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1614
ASSERT_TEST(GetIthWatchedClass(DS3,23,courseID,classID)==FAILURE);
//Line Number: 1615
ASSERT_TEST(AddCourse(DS3,11)==FAILURE);
//Line Number: 1616
ASSERT_TEST(GetIthWatchedClass(DS3,23,courseID,classID)==FAILURE);
//Line Number: 1617
ASSERT_TEST(WatchClass(DS3,19,2,3)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,19,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==3);
//Line Number: 1618
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1619
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1620
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==7);
ASSERT_TEST(*classID==0);
//Line Number: 1621
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==7);
ASSERT_TEST(*classID==5);
//Line Number: 1622
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==1);
//Line Number: 1623
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==1);
//Line Number: 1624
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==2);
//Line Number: 1625
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1626
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1627
ASSERT_TEST(WatchClass(DS3,1,0,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,1,0,timeviewed)==FAILURE);
//Line Number: 1628
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1629
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1630
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1631
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1632
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 1633
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==7);
ASSERT_TEST(*classID==1);
//Line Number: 1634
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1635
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1636
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1637
ASSERT_TEST(WatchClass(DS3,16,0,-5)==INVALID_INPUT);
//Line Number: 1638
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==7);
ASSERT_TEST(*classID==1);
//Line Number: 1639
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1640
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==7);
ASSERT_TEST(*classID==5);
//Line Number: 1641
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1642
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1643
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==7);
ASSERT_TEST(*classID==5);
//Line Number: 1644
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1645
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==7);
ASSERT_TEST(*classID==0);
//Line Number: 1646
ASSERT_TEST(GetIthWatchedClass(DS3,19,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1647
ASSERT_TEST(RemoveCourse(DS3,2)==SUCCESS);
//Line Number: 1648
ASSERT_TEST(GetIthWatchedClass(DS3,24,courseID,classID)==FAILURE);
//Line Number: 1649
ASSERT_TEST(WatchClass(DS3,12,1,3)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,12,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==3);
//Line Number: 1650
ASSERT_TEST(GetIthWatchedClass(DS3,19,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1651
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==12);
ASSERT_TEST(*classID==1);
//Line Number: 1652
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==1);
//Line Number: 1653
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==2);
//Line Number: 1654
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1655
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1656
ASSERT_TEST(GetIthWatchedClass(DS3,19,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1657
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==0);
//Line Number: 1658
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 1659
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==7);
ASSERT_TEST(*classID==5);
//Line Number: 1660
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1661
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1662
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1663
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 1664
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==7);
ASSERT_TEST(*classID==5);
//Line Number: 1665
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==2);
//Line Number: 1666
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==0);
//Line Number: 1667
ASSERT_TEST(GetIthWatchedClass(DS3,20,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1668
ASSERT_TEST(RemoveCourse(DS3,3)==FAILURE);
//Line Number: 1669
ASSERT_TEST(GetIthWatchedClass(DS3,25,courseID,classID)==FAILURE);
//Line Number: 1670
ASSERT_TEST(AddCourse(DS3,11)==FAILURE);
//Line Number: 1671
ASSERT_TEST(GetIthWatchedClass(DS3,25,courseID,classID)==FAILURE);
//Line Number: 1672
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1673
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1674
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1675
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==0);
//Line Number: 1676
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1677
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==1);
//Line Number: 1678
ASSERT_TEST(GetIthWatchedClass(DS3,20,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1679
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==0);
//Line Number: 1680
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1681
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1682
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1683
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==0);
//Line Number: 1684
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1685
ASSERT_TEST(GetIthWatchedClass(DS3,19,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1686
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1687
ASSERT_TEST(GetIthWatchedClass(DS3,19,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1688
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==12);
ASSERT_TEST(*classID==1);
//Line Number: 1689
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1690
ASSERT_TEST(GetIthWatchedClass(DS3,25,courseID,classID)==FAILURE);
//Line Number: 1691
ASSERT_TEST(WatchClass(DS3,6,0,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,6,0,timeviewed)==FAILURE);
//Line Number: 1692
ASSERT_TEST(GetIthWatchedClass(DS3,-5,courseID,classID)==INVALID_INPUT);
//Line Number: 1693
ASSERT_TEST(RemoveCourse(DS3,7)==SUCCESS);
//Line Number: 1694
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1695
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1696
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1697
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==0);
//Line Number: 1698
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1699
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1700
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==12);
ASSERT_TEST(*classID==1);
//Line Number: 1701
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==1);
//Line Number: 1702
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1703
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1704
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==12);
ASSERT_TEST(*classID==1);
//Line Number: 1705
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1706
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1707
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1708
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==12);
ASSERT_TEST(*classID==1);
//Line Number: 1709
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1710
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1711
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==1);
//Line Number: 1712
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1713
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1714
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1715
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1716
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 1717
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==0);
//Line Number: 1718
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1719
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==1);
//Line Number: 1720
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1721
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1722
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1723
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==12);
ASSERT_TEST(*classID==1);
//Line Number: 1724
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1725
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1726
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1727
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==2);
//Line Number: 1728
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1729
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1730
ASSERT_TEST(AddCourse(DS3,10)==FAILURE);
//Line Number: 1731
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==2);
//Line Number: 1732
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1733
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1734
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1735
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1736
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1737
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1738
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==5);
ASSERT_TEST(*classID==0);
//Line Number: 1739
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1740
ASSERT_TEST(RemoveCourse(DS3,5)==SUCCESS);
//Line Number: 1741
ASSERT_TEST(GetIthWatchedClass(DS3,19,courseID,classID)==FAILURE);
//Line Number: 1742
ASSERT_TEST(RemoveCourse(DS3,5)==FAILURE);
//Line Number: 1743
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1744
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1745
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1746
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1747
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 1748
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1749
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1750
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1751
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1752
ASSERT_TEST(AddCourse(DS3,16)==SUCCESS);
//Line Number: 1753
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1754
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1755
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 1756
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1757
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==12);
ASSERT_TEST(*classID==1);
//Line Number: 1758
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 1759
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1760
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1761
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1762
ASSERT_TEST(RemoveCourse(DS3,2)==FAILURE);
//Line Number: 1763
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1764
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1765
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1766
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1767
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1768
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 1769
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1770
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1771
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1772
ASSERT_TEST(AddCourse(DS3,20)==FAILURE);
//Line Number: 1773
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1774
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1775
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1776
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1777
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==12);
ASSERT_TEST(*classID==1);
//Line Number: 1778
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1779
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1780
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1781
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==12);
ASSERT_TEST(*classID==1);
//Line Number: 1782
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 1783
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1784
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1785
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==12);
ASSERT_TEST(*classID==1);
//Line Number: 1786
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1787
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==12);
ASSERT_TEST(*classID==1);
//Line Number: 1788
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1789
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1790
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 1791
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 1792
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1793
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==12);
ASSERT_TEST(*classID==1);
//Line Number: 1794
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1795
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 1796
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1797
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1798
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1799
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 1800
ASSERT_TEST(RemoveCourse(DS3,12)==SUCCESS);
//Line Number: 1801
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1802
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1803
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 1804
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1805
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1806
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1807
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1808
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1809
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1810
ASSERT_TEST(GetIthWatchedClass(DS3,-5,courseID,classID)==INVALID_INPUT);
//Line Number: 1811
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1812
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1813
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1814
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 1815
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1816
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1817
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1818
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1819
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1820
ASSERT_TEST(AddCourse(DS3,5)==SUCCESS);
//Line Number: 1821
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1822
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1823
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1824
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1825
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1826
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1827
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1828
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1829
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 1830
ASSERT_TEST(RemoveCourse(DS3,8)==FAILURE);
//Line Number: 1831
ASSERT_TEST(GetIthWatchedClass(DS3,18,courseID,classID)==FAILURE);
//Line Number: 1832
ASSERT_TEST(RemoveCourse(DS3,16)==SUCCESS);
//Line Number: 1833
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1834
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1835
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1836
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1837
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1838
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1839
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1840
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1841
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1842
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 1843
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1844
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1845
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1846
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1847
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 1848
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1849
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1850
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1851
ASSERT_TEST(WatchClass(DS3,19,2,2)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,19,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 1852
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1853
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1854
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1855
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1856
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1857
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1858
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1859
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1860
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1861
ASSERT_TEST(WatchClass(DS3,7,0,-5)==INVALID_INPUT);
//Line Number: 1862
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1863
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1864
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1865
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1866
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1867
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 1868
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1869
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1870
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1871
ASSERT_TEST(RemoveCourse(DS3,4)==SUCCESS);
//Line Number: 1872
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1873
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 1874
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1875
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1876
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1877
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1878
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1879
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1880
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1881
ASSERT_TEST(WatchClass(DS3,15,5,3)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,15,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==3);
//Line Number: 1882
ASSERT_TEST(GetIthWatchedClass(DS3,19,courseID,classID)==FAILURE);
//Line Number: 1883
ASSERT_TEST(WatchClass(DS3,10,3,2)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,10,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 1884
ASSERT_TEST(GetIthWatchedClass(DS3,20,courseID,classID)==FAILURE);
//Line Number: 1885
ASSERT_TEST(AddCourse(DS3,10)==FAILURE);
//Line Number: 1886
ASSERT_TEST(GetIthWatchedClass(DS3,-5,courseID,classID)==INVALID_INPUT);
//Line Number: 1887
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 1888
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1889
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1890
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 1891
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1892
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1893
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1894
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1895
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1896
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1897
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1898
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1899
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1900
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1901
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 1902
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1903
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1904
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1905
ASSERT_TEST(WatchClass(DS3,15,1,1)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,15,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 1906
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 1907
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1908
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1909
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1910
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1911
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1912
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1913
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1914
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1915
ASSERT_TEST(AddCourse(DS3,13)==FAILURE);
//Line Number: 1916
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1917
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1918
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 1919
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1920
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 1921
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1922
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1923
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1924
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1925
ASSERT_TEST(AddCourse(DS3,5)==FAILURE);
//Line Number: 1926
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1927
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1928
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1929
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1930
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1931
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1932
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1933
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1934
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 1935
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1936
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 1937
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1938
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1939
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1940
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1941
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1942
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1943
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1944
ASSERT_TEST(WatchClass(DS3,3,0,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,3,0,timeviewed)==FAILURE);
//Line Number: 1945
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1946
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 1947
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 1948
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 1949
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1950
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1951
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 1952
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1953
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1954
ASSERT_TEST(WatchClass(DS3,11,2,10)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,11,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 1955
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1956
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1957
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1958
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1959
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1960
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 1961
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1962
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1963
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 1964
ASSERT_TEST(WatchClass(DS3,16,0,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,16,0,timeviewed)==FAILURE);
//Line Number: 1965
ASSERT_TEST(GetIthWatchedClass(DS3,21,courseID,classID)==FAILURE);
//Line Number: 1966
ASSERT_TEST(AddCourse(DS3,5)==FAILURE);
//Line Number: 1967
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 1968
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1969
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 1970
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 1971
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 1972
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1973
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1974
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==11);
ASSERT_TEST(*classID==2);
//Line Number: 1975
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1976
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1977
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 1978
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1979
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 1980
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 1981
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1982
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1983
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 1984
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 1985
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 1986
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 1987
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 1988
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 1989
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1990
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 1991
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 1992
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 1993
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 1994
ASSERT_TEST(GetIthWatchedClass(DS3,-5,courseID,classID)==INVALID_INPUT);
//Line Number: 1995
ASSERT_TEST(AddCourse(DS3,10)==FAILURE);
//Line Number: 1996
ASSERT_TEST(GetIthWatchedClass(DS3,21,courseID,classID)==FAILURE);
//Line Number: 1997
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 1998
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 1999
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 2000
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==11);
ASSERT_TEST(*classID==2);
//Line Number: 2001
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2002
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 2003
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 2004
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 2005
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2006
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2007
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2008
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2009
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==11);
ASSERT_TEST(*classID==2);
//Line Number: 2010
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 2011
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 2012
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2013
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2014
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 2015
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2016
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2017
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 2018
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2019
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2020
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2021
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2022
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 2023
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2024
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2025
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2026
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2027
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2028
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2029
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 2030
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2031
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2032
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2033
ASSERT_TEST(WatchClass(DS3,1,0,-5)==INVALID_INPUT);
//Line Number: 2034
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2035
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2036
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 2037
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2038
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2039
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2040
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 2041
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2042
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2043
ASSERT_TEST(WatchClass(DS3,11,2,19)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,11,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==29);
//Line Number: 2044
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==11);
ASSERT_TEST(*classID==2);
//Line Number: 2045
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2046
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 2047
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 2048
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 2049
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2050
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 2051
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2052
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 2053
ASSERT_TEST(WatchClass(DS3,11,2,17)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,11,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==46);
//Line Number: 2054
ASSERT_TEST(GetIthWatchedClass(DS3,-5,courseID,classID)==INVALID_INPUT);
//Line Number: 2055
ASSERT_TEST(AddCourse(DS3,17)==SUCCESS);
//Line Number: 2056
ASSERT_TEST(GetIthWatchedClass(DS3,-5,courseID,classID)==INVALID_INPUT);
//Line Number: 2057
ASSERT_TEST(WatchClass(DS3,7,0,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,7,0,timeviewed)==FAILURE);
//Line Number: 2058
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2059
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2060
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==11);
ASSERT_TEST(*classID==2);
//Line Number: 2061
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2062
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 2063
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2064
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2065
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2066
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 2067
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2068
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 2069
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2070
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 2071
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2072
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 2073
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2074
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2075
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2076
ASSERT_TEST(WatchClass(DS3,8,0,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,8,0,timeviewed)==FAILURE);
//Line Number: 2077
ASSERT_TEST(GetIthWatchedClass(DS3,21,courseID,classID)==FAILURE);
//Line Number: 2078
ASSERT_TEST(WatchClass(DS3,19,1,5)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,19,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 2079
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 2080
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2081
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 2082
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2083
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2084
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2085
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2086
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2087
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2088
ASSERT_TEST(RemoveCourse(DS3,16)==FAILURE);
//Line Number: 2089
ASSERT_TEST(GetIthWatchedClass(DS3,22,courseID,classID)==FAILURE);
//Line Number: 2090
ASSERT_TEST(AddCourse(DS3,10)==FAILURE);
//Line Number: 2091
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2092
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2093
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 2094
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2095
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 2096
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==1);
//Line Number: 2097
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2098
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2099
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2100
ASSERT_TEST(AddCourse(DS3,2)==SUCCESS);
//Line Number: 2101
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2102
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2103
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 2104
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 2105
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==11);
ASSERT_TEST(*classID==2);
//Line Number: 2106
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2107
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 2108
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2109
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 2110
ASSERT_TEST(RemoveCourse(DS3,7)==FAILURE);
//Line Number: 2111
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2112
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 2113
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 2114
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==11);
ASSERT_TEST(*classID==2);
//Line Number: 2115
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2116
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2117
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 2118
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2119
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2120
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2121
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==1);
//Line Number: 2122
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2123
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2124
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2125
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2126
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2127
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 2128
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2129
ASSERT_TEST(AddCourse(DS3,3)==SUCCESS);
//Line Number: 2130
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 2131
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2132
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==11);
ASSERT_TEST(*classID==2);
//Line Number: 2133
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2134
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2135
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2136
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2137
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 2138
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2139
ASSERT_TEST(WatchClass(DS3,1,0,-5)==INVALID_INPUT);
//Line Number: 2140
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2141
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 2142
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2143
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2144
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2145
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2146
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2147
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2148
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2149
ASSERT_TEST(WatchClass(DS3,8,0,5)==FAILURE);
ASSERT_TEST(TimeViewed(DS3,8,0,timeviewed)==FAILURE);
//Line Number: 2150
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2151
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2152
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2153
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2154
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 2155
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 2156
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2157
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2158
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2159
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 2160
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2161
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 2162
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2163
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2164
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2165
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 2166
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2167
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2168
ASSERT_TEST(GetIthWatchedClass(DS3,22,courseID,classID)==FAILURE);
//Line Number: 2169
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2170
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 2171
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==1);
//Line Number: 2172
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 2173
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2174
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 2175
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2176
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2177
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2178
ASSERT_TEST(AddCourse(DS3,11)==FAILURE);
//Line Number: 2179
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==11);
ASSERT_TEST(*classID==2);
//Line Number: 2180
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2181
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==1);
//Line Number: 2182
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 2183
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 2184
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2185
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==1);
//Line Number: 2186
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2187
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2188
ASSERT_TEST(AddCourse(DS3,13)==FAILURE);
//Line Number: 2189
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==1);
//Line Number: 2190
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 2191
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2192
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2193
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2194
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2195
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 2196
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2197
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==1);
//Line Number: 2198
ASSERT_TEST(AddCourse(DS3,12)==SUCCESS);
//Line Number: 2199
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2200
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2201
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2202
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2203
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==1);
//Line Number: 2204
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2205
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 2206
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 2207
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2208
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==1);
//Line Number: 2209
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 2210
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==1);
//Line Number: 2211
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2212
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2213
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2214
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2215
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 2216
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2217
ASSERT_TEST(RemoveCourse(DS3,2)==SUCCESS);
//Line Number: 2218
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 2219
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==1);
//Line Number: 2220
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 2221
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2222
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==1);
//Line Number: 2223
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==11);
ASSERT_TEST(*classID==2);
//Line Number: 2224
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2225
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 2226
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 2227
ASSERT_TEST(RemoveCourse(DS3,16)==FAILURE);
//Line Number: 2228
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 2229
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2230
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 2231
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2232
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2233
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2234
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2235
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2236
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2237
ASSERT_TEST(AddCourse(DS3,2)==SUCCESS);
//Line Number: 2238
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2239
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2240
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2241
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 2242
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 2243
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2244
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 2245
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 2246
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2247
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 2248
ASSERT_TEST(GetIthWatchedClass(DS3,3,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==3);
//Line Number: 2249
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2250
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2251
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 2252
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2253
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2254
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2255
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 2256
ASSERT_TEST(WatchClass(DS3,15,7,14)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,15,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 2257
ASSERT_TEST(GetIthWatchedClass(DS3,-5,courseID,classID)==INVALID_INPUT);
//Line Number: 2258
ASSERT_TEST(GetIthWatchedClass(DS3,23,courseID,classID)==FAILURE);
//Line Number: 2259
ASSERT_TEST(GetIthWatchedClass(DS3,18,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2260
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2261
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==1);
//Line Number: 2262
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2263
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2264
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2265
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2266
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2267
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 2268
ASSERT_TEST(AddCourse(DS3,10)==FAILURE);
//Line Number: 2269
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2270
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2271
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==7);
//Line Number: 2272
ASSERT_TEST(GetIthWatchedClass(DS3,10,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 2273
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2274
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2275
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2276
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 2277
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 2278
ASSERT_TEST(WatchClass(DS3,9,1,11)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,9,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//Line Number: 2279
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 2280
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 2281
ASSERT_TEST(GetIthWatchedClass(DS3,4,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==1);
//Line Number: 2282
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2283
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2284
ASSERT_TEST(GetIthWatchedClass(DS3,18,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2285
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2286
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2287
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2288
ASSERT_TEST(RemoveCourse(DS3,18)==FAILURE);
//Line Number: 2289
ASSERT_TEST(GetIthWatchedClass(DS3,-5,courseID,classID)==INVALID_INPUT);
//Line Number: 2290
ASSERT_TEST(GetIthWatchedClass(DS3,23,courseID,classID)==FAILURE);
//Line Number: 2291
ASSERT_TEST(AddCourse(DS3,16)==SUCCESS);
//Line Number: 2292
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 2293
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==1);
//Line Number: 2294
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 2295
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 2296
ASSERT_TEST(GetIthWatchedClass(DS3,7,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==2);
//Line Number: 2297
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2298
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 2299
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==7);
//Line Number: 2300
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 2301
ASSERT_TEST(WatchClass(DS3,13,0,10)==SUCCESS);
ASSERT_TEST(TimeViewed(DS3,13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==70);
//Line Number: 2302
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 2303
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2304
ASSERT_TEST(GetIthWatchedClass(DS3,18,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2305
ASSERT_TEST(GetIthWatchedClass(DS3,9,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==0);
//Line Number: 2306
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 2307
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2308
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==11);
ASSERT_TEST(*classID==2);
//Line Number: 2309
ASSERT_TEST(GetIthWatchedClass(DS3,18,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2310
ASSERT_TEST(GetIthWatchedClass(DS3,16,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==5);
//Line Number: 2311
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 2312
ASSERT_TEST(GetIthWatchedClass(DS3,11,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==9);
ASSERT_TEST(*classID==3);
//Line Number: 2313
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2314
ASSERT_TEST(GetIthWatchedClass(DS3,18,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2315
ASSERT_TEST(GetIthWatchedClass(DS3,15,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==0);
//Line Number: 2316
ASSERT_TEST(GetIthWatchedClass(DS3,14,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==4);
//Line Number: 2317
ASSERT_TEST(GetIthWatchedClass(DS3,12,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==1);
//Line Number: 2318
ASSERT_TEST(GetIthWatchedClass(DS3,5,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==7);
//Line Number: 2319
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 2320
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 2321
ASSERT_TEST(GetIthWatchedClass(DS3,1,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==13);
ASSERT_TEST(*classID==0);
//Line Number: 2322
ASSERT_TEST(GetIthWatchedClass(DS3,18,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==2);
//Line Number: 2323
ASSERT_TEST(GetIthWatchedClass(DS3,2,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==11);
ASSERT_TEST(*classID==2);
//Line Number: 2324
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
//Line Number: 2325
ASSERT_TEST(GetIthWatchedClass(DS3,13,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==19);
ASSERT_TEST(*classID==2);
//Line Number: 2326
ASSERT_TEST(GetIthWatchedClass(DS3,6,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==14);
ASSERT_TEST(*classID==0);
//Line Number: 2327
ASSERT_TEST(GetIthWatchedClass(DS3,8,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==15);
ASSERT_TEST(*classID==1);
//Line Number: 2328
ASSERT_TEST(GetIthWatchedClass(DS3,17,courseID,classID)==SUCCESS);
ASSERT_TEST(*courseID==10);
ASSERT_TEST(*classID==3);
delete timeviewed;
delete classID;
delete courseID;
Quit(&DS1);
Quit(&DS2);
Quit(&DS3);
}
