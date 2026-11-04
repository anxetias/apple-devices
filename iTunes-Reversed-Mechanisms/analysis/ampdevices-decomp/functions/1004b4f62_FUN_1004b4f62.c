// name: FUN_1004b4f62
// address: 1004b4f62

void FUN_1004b4f62(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_1004afcf8();
  param_1[2] = 0;
  if (*param_4 == '\0') {
    FUN_1004afcf8(param_1);
  }
  else {
    param_1[0x60] = param_4[0x40];
    uVar1 = *(undefined8 *)param_4;
    uVar2 = *(undefined8 *)(param_4 + 8);
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    uVar4 = *(undefined8 *)(param_4 + 0x18);
    uVar5 = *(undefined8 *)(param_4 + 0x20);
    uVar6 = *(undefined8 *)(param_4 + 0x28);
    uVar7 = *(undefined8 *)(param_4 + 0x38);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_4 + 0x30);
    *(undefined8 *)(param_1 + 0x58) = uVar7;
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *param_1 = 1;
    param_1[3] = 1;
  }
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

