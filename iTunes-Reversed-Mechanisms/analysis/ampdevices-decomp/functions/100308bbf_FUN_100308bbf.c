// name: FUN_100308bbf
// address: 100308bbf

int FUN_100308bbf(long param_1,byte param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long local_178 [4];
  long *local_158;
  long local_148 [4];
  long *local_128;
  long local_118 [4];
  long *local_f8;
  long local_e8 [4];
  long *local_c8;
  long local_b8 [4];
  long *local_98;
  long local_88 [4];
  long *local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100308c84:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackDataIsValid(inTrackData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100308c84;
    }
    if (*(long *)(param_3 + 0x20) != 0) {
      if ((*(byte *)(param_1 + 0x1bb4) & 0x40) == 0) {
        FUN_10028593a(local_178,param_3);
        plVar5 = local_178;
        iVar2 = FUN_10032140e(param_1,plVar5);
      }
      else {
        if ((param_2 & 1) != 0) {
          FUN_10028593a(local_88,param_3);
          iVar2 = FUN_100321300(param_1,local_88);
          if (local_68 == local_88) {
            lVar4 = 0x20;
LAB_100308d9e:
            (**(code **)(*local_68 + lVar4))();
          }
          else {
            lVar4 = 0x28;
            if (local_68 != (long *)0x0) goto LAB_100308d9e;
          }
          if (iVar2 != 0) goto LAB_100308cd8;
        }
        if ((param_2 & 2) != 0) {
          FUN_10028593a(local_b8,param_3);
          iVar2 = FUN_100321336(param_1,local_b8);
          if (local_98 == local_b8) {
            lVar4 = 0x20;
LAB_100308df4:
            (**(code **)(*local_98 + lVar4))();
          }
          else {
            lVar4 = 0x28;
            if (local_98 != (long *)0x0) goto LAB_100308df4;
          }
          if (iVar2 != 0) goto LAB_100308cd8;
        }
        if ((param_2 & 4) != 0) {
          FUN_10028593a(local_e8,param_3);
          iVar2 = FUN_10032136c(param_1,local_e8);
          if (local_c8 == local_e8) {
            lVar4 = 0x20;
LAB_100308e9c:
            (**(code **)(*local_c8 + lVar4))();
          }
          else {
            lVar4 = 0x28;
            if (local_c8 != (long *)0x0) goto LAB_100308e9c;
          }
          if (iVar2 != 0) goto LAB_100308cd8;
        }
        if ((param_2 & 8) != 0) {
          FUN_10028593a(local_118,param_3);
          iVar2 = FUN_1003213a2(param_1,local_118);
          if (local_f8 == local_118) {
            lVar4 = 0x20;
LAB_100308f44:
            (**(code **)(*local_f8 + lVar4))();
          }
          else {
            lVar4 = 0x28;
            if (local_f8 != (long *)0x0) goto LAB_100308f44;
          }
          if (iVar2 != 0) goto LAB_100308cd8;
        }
        iVar2 = 0;
        if (-1 < (char)param_2) goto LAB_100308cd8;
        FUN_10028593a(local_148,param_3);
        plVar5 = local_148;
        iVar2 = FUN_1003213d8(param_1,plVar5);
        local_158 = local_128;
      }
      if (local_158 == plVar5) {
        lVar4 = 0x20;
      }
      else {
        lVar4 = 0x28;
        if (local_158 == (long *)0x0) goto LAB_100308cd8;
      }
      (**(code **)(*local_158 + lVar4))();
      goto LAB_100308cd8;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inCallbackFunction != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = -0x32;
LAB_100308cd8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

