// name: FUN_10059c41c
// address: 10059c41c

void FUN_10059c41c(int param_1,char param_2,char param_3,long param_4)

{
  long lVar1;
  
  FUN_1001c62d9(param_4,0x6660);
  *(undefined4 *)(param_4 + 0x3cc) = 500;
  *(char *)(param_4 + 0x2db) = param_2;
  *(char *)(param_4 + 0x2dc) = param_3;
  *(undefined2 *)(param_4 + 0x2fe) = 0x101;
  *(undefined1 *)(param_4 + 0x300) = 1;
  *(undefined1 *)(param_4 + 0x315) = 1;
  if (param_1 < 0x69506f64) {
    if ((param_1 != 0x69506164) && (param_1 != 0x6950686e)) goto LAB_10059c559;
  }
  else if ((param_1 != 0x69506f74) && (param_1 != 0x69506f64)) goto LAB_10059c559;
  *(undefined1 *)(param_4 + 0x321) = 1;
  *(undefined1 *)(param_4 + 0x31e) = 1;
  *(undefined1 *)(param_4 + 0x310) = 1;
  if (param_1 < 0x69506f64) {
    if ((param_1 != 0x69506164) && (param_1 != 0x6950686e)) goto LAB_10059c559;
  }
  else if (param_1 != 0x69506f74) {
    if (param_1 == 0x69506f64) {
      *(undefined1 *)(param_4 + 0x2fc) = 0;
      *(undefined1 *)(param_4 + 799) = 0;
      *(undefined1 *)(param_4 + 0x302) = 1;
      *(undefined2 *)(param_4 + 0x304) = 0;
      *(undefined1 *)(param_4 + 0x325) = 0;
      *(undefined1 *)(param_4 + 0x361) = 1;
    }
    goto LAB_10059c559;
  }
  *(undefined1 *)(param_4 + 0x2fc) = 1;
  *(undefined1 *)(param_4 + 799) = 1;
  *(bool *)(param_4 + 0x326) = param_1 == 0x6950686e;
  *(undefined1 *)(param_4 + 0x2f4) = 1;
  *(undefined2 *)(param_4 + 0x304) = 0x101;
  *(undefined1 *)(param_4 + 0x325) = 1;
  *(bool *)(param_4 + 0x34c) = param_1 == 0x69506164;
  *(undefined1 *)(param_4 + 0x362) = 1;
LAB_10059c559:
  if (param_3 == '\0' && param_2 != '\0') {
    *(undefined8 *)(param_4 + 0x3f0) = 0x7fffffff;
  }
  *(undefined4 *)(param_4 + 0x6dc) = 0;
  lVar1 = 0;
  do {
    FUN_10035dd18(param_4 + 0x6e0 + lVar1);
    lVar1 = lVar1 + 0x31c;
  } while (lVar1 != 0x3e30);
  FUN_10035ceef(param_4 + 0x408);
  *(undefined8 *)(param_4 + 0xe8) = 0xffffffffffffffff;
  return;
}

