// name: FUN_100295c9b
// address: 100295c9b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100295c9b(long param_1,undefined4 *param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0xd21) == '\0') {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "connectionData->playerOpen";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
    goto LAB_100295d63;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  dVar2 = 0.0;
  uVar4 = 0;
  if (iVar1 < 0x48545450) {
    if ((iVar1 == 0x44574e4c) || (dVar2 = 0.0, iVar1 == 0x46494c45)) goto LAB_100295d1f;
  }
  else if ((iVar1 == 0x48545450) || ((iVar1 == 0x53485244 || (iVar1 == 0x4d46494c)))) {
LAB_100295d1f:
    dVar2 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)*(undefined8 *)(param_1 + 0xd60)) -
            _DAT_10070d3d0) +
            ((double)CONCAT44(DAT_10070d3c0._4_4_,
                              (int)((ulong)*(undefined8 *)(param_1 + 0xd60) >> 0x20)) -
            _UNK_10070d3d8);
    uVar4 = (undefined4)(long)((_DAT_100708b48 / (double)*(int *)(param_1 + 0xd28)) * dVar2);
  }
  *param_2 = uVar4;
  *param_3 = dVar2;
  uVar5 = 0;
LAB_100295d63:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

