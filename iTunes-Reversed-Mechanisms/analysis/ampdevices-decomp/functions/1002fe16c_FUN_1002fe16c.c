// name: FUN_1002fe16c
// address: 1002fe16c

void FUN_1002fe16c(long param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 local_50 [32];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100538877(local_50);
  cVar1 = FUN_10053916d(param_2,2);
  if (cVar1 != '\0') {
    cVar1 = FUN_10053916d(param_2,0x4e);
    uVar2 = param_3 | 2;
    if (cVar1 == '\0') {
      uVar2 = param_3;
    }
    FUN_1005389ba(local_50,0x4e);
    FUN_10030d877(param_1,uVar2);
  }
  cVar1 = FUN_10053916d(param_2,0x4e);
  if ((cVar1 != '\0') && (*(undefined1 *)(param_1 + 0xc9) = 0, (param_3 & 4) == 0)) {
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  cVar1 = FUN_10053916d(param_2,3);
  if (cVar1 != '\0') {
    cVar1 = FUN_10053916d(param_2,0x4f);
    uVar2 = param_3 | 2;
    if (cVar1 == '\0') {
      uVar2 = param_3;
    }
    FUN_1005389ba(local_50,0x4f);
    FUN_10030dbe1(param_1,uVar2);
  }
  cVar1 = FUN_10053916d(param_2,0x4f);
  if ((cVar1 != '\0') && (*(undefined1 *)(param_1 + 0xcb) = 0, (param_3 & 4) == 0)) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  cVar1 = FUN_10053916d(param_2,4);
  if (cVar1 != '\0') {
    cVar1 = FUN_10053916d(param_2,0x50);
    uVar2 = param_3 | 2;
    if (cVar1 == '\0') {
      uVar2 = param_3;
    }
    FUN_1005389ba(local_50,0x50);
    FUN_10030d973(param_1,uVar2);
  }
  cVar1 = FUN_10053916d(param_2,0x50);
  if ((cVar1 != '\0') && (*(undefined1 *)(param_1 + 0xca) = 0, (param_3 & 4) == 0)) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  cVar1 = FUN_10053916d(param_2,0x47);
  if (cVar1 != '\0') {
    cVar1 = FUN_10053916d(param_2,0x51);
    uVar2 = param_3 | 2;
    if (cVar1 == '\0') {
      uVar2 = param_3;
    }
    FUN_1005389ba(local_50,0x51);
    FUN_10030de58(param_1,uVar2);
  }
  cVar1 = FUN_10053916d(param_2,0x12);
  if (cVar1 != '\0') {
    cVar1 = FUN_10053916d(param_2,0x52);
    uVar2 = param_3 | 2;
    if (cVar1 == '\0') {
      uVar2 = param_3;
    }
    FUN_1005389ba(local_50,0x52);
    FUN_10030df7e(param_1,uVar2);
  }
  cVar1 = FUN_10053916d(param_2,0x3e);
  if (cVar1 != '\0') {
    cVar1 = FUN_10053916d(param_2,0x53);
    uVar2 = param_3 | 2;
    if (cVar1 == '\0') {
      uVar2 = param_3;
    }
    FUN_1005389ba(local_50,0x53);
    FUN_10030e0a3(param_1,uVar2);
  }
  cVar1 = FUN_10053916d(param_2,8);
  if ((cVar1 != '\0') && (*(undefined1 *)(param_1 + 0xcc) = 0, (param_3 & 4) == 0)) {
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  cVar1 = FUN_10053916d(param_2,0x55);
  if (cVar1 != '\0') {
    FUN_10030e191(param_1);
  }
  cVar1 = FUN_10053916d(param_2,0x3c);
  if (cVar1 != '\0') {
    if (param_1 == 0) {
      FUN_10030e2f7(0);
    }
    else {
      cVar1 = FUN_10030e2f7(*(undefined8 *)(param_1 + 0x10));
      if (cVar1 == '\0') {
        if (*(long *)(param_1 + 0x28) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x78) = 0;
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x68) = 0;
        }
      }
    }
  }
  if ((param_3 & 4) == 0) {
    FUN_1002fb127(param_1,0,local_50);
  }
  FUN_100538877(param_2,local_50);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

