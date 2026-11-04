// name: FUN_1005cdd92
// address: 1005cdd92

void FUN_1005cdd92(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,int param_5
                  )

{
  int iVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == 0) goto LAB_1005cde57;
  iVar1 = *(int *)(param_2 + 0x66b0);
  if (iVar1 == 0x69506164) {
    uVar3 = 0x10f7;
LAB_1005cddf1:
    bVar2 = false;
  }
  else {
    if (iVar1 == 0x69506f74) {
      uVar3 = 0x10f5;
      goto LAB_1005cddf1;
    }
    if (iVar1 == 0x6950686e) {
      uVar3 = 0x10f6;
      goto LAB_1005cddf1;
    }
    bVar2 = true;
    uVar3 = 0;
  }
  if ((param_5 == -5) && (param_5 = 0x46b, (*(byte *)(param_2 + 0x6664) & (byte)param_4) == 0)) {
    param_5 = -5;
  }
  if (!bVar2) {
    FUN_1001c34b7(param_4,local_238);
    FUN_1005ce214(param_1,param_2,param_3,uVar3,param_5);
  }
LAB_1005cde57:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

