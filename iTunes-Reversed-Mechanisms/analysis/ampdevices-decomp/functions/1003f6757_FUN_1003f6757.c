// name: FUN_1003f6757
// address: 1003f6757

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003f6757(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  undefined1 (*pauVar1) [16];
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  pauVar1 = (undefined1 (*) [16])*param_4;
  FUN_1001c62d9(pauVar1,0x18);
  *(undefined8 *)*pauVar1 = 0x18646f686d;
  *(undefined4 *)(*pauVar1 + 0xc) = param_3;
  lVar4 = FUN_10016aaf8(DAT_1008c4d90,param_2,0);
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "cfData != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffce;
  }
  else {
    lVar5 = FUN_100170ef7(lVar4);
    FUN_100170fc3(lVar4,0,lVar5,pauVar1[1] + 8);
    *param_4 = (long)(pauVar1[1] + lVar5 + 8);
    iVar3 = (int)(pauVar1[1] + lVar5 + 8) - (int)pauVar1;
    *(int *)(*pauVar1 + 8) = iVar3;
    if (*(char *)(param_1 + 0x100127) != '\0') {
      auVar7._12_4_ = *(undefined4 *)(*pauVar1 + 0xc);
      auVar7._8_4_ = iVar3;
      auVar7._0_8_ = *(undefined8 *)*pauVar1;
      auVar7 = pshufb(auVar7,_DAT_100718a70);
      *pauVar1 = auVar7;
    }
    FUN_10017060f(lVar4);
    uVar6 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

