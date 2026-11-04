// name: FUN_10030256d
// address: 10030256d

undefined8 FUN_10030256d(int param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  
  FUN_1001c62d9(param_3,0x460);
  if (param_1 < 0x46494c45) {
    if (param_1 == 0x43442020) {
      _memcpy((void *)(param_3 + 0x2c),param_2,0x420);
      *(undefined2 *)(param_3 + 0x44c) = *(undefined2 *)(param_2 + 0x85);
      *(undefined2 *)(param_3 + 0x44e) = *(undefined2 *)((long)param_2 + 0x42a);
      *(undefined1 *)(param_3 + 0x452) = *(undefined1 *)((long)param_2 + 0x42e);
      *(undefined2 *)(param_3 + 0x450) = *(undefined2 *)((long)param_2 + 0x42c);
      *(undefined2 *)(param_3 + 0x453) = *(undefined2 *)((long)param_2 + 0x42f);
      *(undefined1 *)(param_3 + 0x455) = *(undefined1 *)((long)param_2 + 0x431);
      *(undefined4 *)(param_3 + 0x458) = *(undefined4 *)((long)param_2 + 0x424);
      *(undefined4 *)(param_3 + 0x45c) = *(undefined4 *)(param_2 + 0x84);
    }
    else {
      if (param_1 != 0x44574e4c) {
        return 0xffffffce;
      }
      FUN_1001c631b(param_2,param_3 + 0x2c,0x430);
    }
  }
  else if (param_1 == 0x4d46494c) {
    cVar4 = FUN_10017cbd0(param_2);
    if (cVar4 != '\0') {
      _memcpy((void *)(param_3 + 0x2c),param_2,0x420);
    }
    *(undefined4 *)(param_3 + 0x44c) = *(undefined4 *)(param_2 + 0x84);
    *(undefined8 *)(param_3 + 0x450) = param_2[0x87];
    *(undefined4 *)(param_3 + 0x458) = *(undefined4 *)(param_2 + 0x88);
  }
  else if (param_1 == 0x4d425546) {
    *(undefined8 *)(param_3 + 0x2c) = *param_2;
    *(undefined8 *)(param_3 + 0x34) = param_2[1];
    uVar1 = param_2[3];
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    *(undefined8 *)(param_3 + 0x3c) = param_2[2];
    *(undefined8 *)(param_3 + 0x44) = uVar1;
    *(undefined8 *)(param_3 + 0x4c) = uVar2;
    *(undefined8 *)(param_3 + 0x54) = uVar3;
    *(undefined8 *)(param_3 + 0x5c) = param_2[6];
    *(undefined1 *)(param_3 + 100) = *(undefined1 *)(param_2 + 7);
  }
  else {
    if (param_1 != 0x46494c45) {
      return 0xffffffce;
    }
    cVar4 = FUN_10017cbd0(param_2);
    if (cVar4 != '\0') {
      _memcpy((void *)(param_3 + 0x2c),param_2,0x420);
    }
    *(undefined4 *)(param_3 + 0x44c) = *(undefined4 *)(param_2 + 0x84);
  }
  return 0;
}

