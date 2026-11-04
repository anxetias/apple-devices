// name: FUN_10042ac59
// address: 10042ac59

undefined4 FUN_10042ac59(undefined4 *param_1,undefined4 param_2,byte param_3,undefined4 param_4)

{
  FUN_1001c62d9(param_1,0x30);
  *(char *)((long)param_1 + 0xb) = (char)param_2;
  *(byte *)(param_1 + 3) = param_3;
  param_1[1] = param_4;
  switch(param_2) {
  case 0:
    goto switchD_10042ac9d_caseD_0;
  case 1:
    *(undefined2 *)(param_1 + 2) = 0x4154;
    *(undefined1 *)((long)param_1 + 10) = 0x47;
    break;
  case 2:
    *(undefined2 *)(param_1 + 2) = 0x4449;
    *(undefined1 *)((long)param_1 + 10) = 0x33;
    param_2 = 0xffffffce;
    if (1 < param_3) goto switchD_10042ac9d_caseD_0;
    *(undefined8 *)(param_1 + 5) = 0x300000003;
    param_1[7] = 0;
    break;
  case 3:
  case 4:
    *(undefined2 *)(param_1 + 2) = 0x4449;
    *(undefined1 *)((long)param_1 + 10) = 0x33;
    param_2 = 0xffffffce;
    if (param_3 != 0) goto switchD_10042ac9d_caseD_0;
    *(undefined8 *)(param_1 + 5) = 0x400000004;
    param_1[7] = 2;
    break;
  default:
    param_2 = 0xffffffce;
    goto switchD_10042ac9d_caseD_0;
  }
  param_2 = 0;
switchD_10042ac9d_caseD_0:
  param_1[8] = param_1[6] + param_1[5] + param_1[7];
  if ((*(byte *)((long)param_1 + 0xd) & 0x10) != 0) {
    param_1[9] = 10;
  }
  *param_1 = 0x49443344;
  return param_2;
}

