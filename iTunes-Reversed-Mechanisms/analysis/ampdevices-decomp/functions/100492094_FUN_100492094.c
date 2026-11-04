// name: FUN_100492094
// address: 100492094

int FUN_100492094(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "item1 != nullptr";
LAB_100492242:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      lVar1 = *(long *)(param_1 + 0x18);
      sVar5 = *(short *)(lVar1 + 0x10);
      if (sVar5 == 0x2a) {
        sVar5 = 0x86;
      }
      else if (sVar5 == 0xe) {
        sVar5 = 0x84;
      }
      else if (sVar5 == 0xd) {
        sVar5 = (*(char *)(lVar1 + 0x2a3) == '\0') + 0x87;
      }
      else {
        sVar5 = *(short *)(param_1 + 0x6a);
      }
      lVar2 = *(long *)(param_2 + 0x18);
      sVar6 = *(short *)(lVar2 + 0x10);
      if (sVar6 == 0x2a) {
        sVar6 = 0x86;
      }
      else if (sVar6 == 0xe) {
        sVar6 = 0x84;
      }
      else if (sVar6 == 0xd) {
        sVar6 = (*(char *)(lVar2 + 0x2a3) == '\0') + 0x87;
      }
      else {
        sVar6 = *(short *)(param_2 + 0x6a);
      }
      iVar7 = -1;
      if ((((*(byte *)(lVar1 + 0x240) & 4) == 0) && (iVar7 = 1, (*(byte *)(lVar2 + 0x240) & 4) == 0)
          ) && (iVar7 = (int)sVar5 - (int)sVar6, iVar7 == 0)) {
        iVar7 = FUN_1001b96de(param_1 + 0x50,param_2 + 0x50,0x3f1);
        if (iVar7 == 0) {
          iVar7 = *(int *)(*(long *)(param_1 + 0x18) + 0x58) -
                  *(int *)(*(long *)(param_2 + 0x18) + 0x58);
        }
      }
      goto LAB_100492200;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "item2 != nullptr";
      goto LAB_100492242;
    }
  }
  iVar7 = 0;
  FUN_1001782e9(0,0);
LAB_100492200:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

