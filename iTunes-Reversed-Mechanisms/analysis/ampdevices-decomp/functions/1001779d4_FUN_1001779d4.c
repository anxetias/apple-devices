// name: FUN_1001779d4
// address: 1001779d4

undefined8 FUN_1001779d4(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0x206c;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined8 *)((long)param_1 + 4) = 0x100000001;
    *(undefined4 *)((long)param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 2) = 1;
    uVar1 = 0;
  }
  return uVar1;
}

