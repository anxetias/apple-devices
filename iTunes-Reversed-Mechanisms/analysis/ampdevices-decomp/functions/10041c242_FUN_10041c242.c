// name: FUN_10041c242
// address: 10041c242

void FUN_10041c242(undefined4 *param_1,long param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(param_1 + 0x19e) = 0;
  FUN_1001c62d9(param_1,0x680);
  FUN_1001bb41a(param_2 + 0x60,param_1 + 1);
  param_1[0x81] = *(undefined4 *)(param_2 + 0x4c4);
  *(undefined8 *)(param_1 + 0x82) = *(undefined8 *)(param_2 + 0x80);
  if (*(char *)(param_2 + 0x5c) == '\x01') {
    param_1[0x19b] = param_3;
    *(undefined1 *)(param_1 + 0x19c) = param_4;
    *(undefined1 *)((long)param_1 + 0x669) = *(undefined1 *)(param_2 + 0x135b);
    uVar2 = 2;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x196) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x198) = uVar1;
    *(undefined1 *)(param_1 + 0x19a) = *(undefined1 *)(param_2 + 0x1359);
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return;
}

