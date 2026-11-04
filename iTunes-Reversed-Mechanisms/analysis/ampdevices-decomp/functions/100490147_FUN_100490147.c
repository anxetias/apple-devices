// name: FUN_100490147
// address: 100490147

undefined8 FUN_100490147(undefined8 param_1,int param_2,int *param_3)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 != 0) || (lVar4 = FUN_100242590(), lVar4 == 0)) goto LAB_100490168;
  lVar2 = *(long *)(lVar4 + 0x10);
  if (lVar2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_3a = "TrackInfoIsValid(trackInfo)";
LAB_100490389:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1004902aa:
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(lVar2 + 0x80) != 0x74646174) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_3a = "TrackDataIsValid(trackData)";
          goto LAB_100490389;
        }
        goto LAB_1004902aa;
      }
    }
    if (((*(int *)(lVar2 + 0x84) == 0x646f5069) || (*(int *)(lVar2 + 0x84) == 0x2062696c)) &&
       (uVar1 = *(uint *)(lVar4 + 0xc2), (uVar1 >> 0xb & 1) == 0)) {
      if ((*(long *)(lVar4 + 0x58) == 0) || (*(int *)(*(long *)(lVar4 + 0x58) + 0x3c) != 0x48545450)
         ) {
        if ((uVar1 >> 0x17 & 1) != 0) goto LAB_100490168;
      }
      else if (((uVar1 >> 0x17 & 1) != 0) ||
              (*(int *)(*(long *)(lVar4 + 0x10) + 0x84) == 0x6973756d)) goto LAB_100490168;
      uVar6 = FUN_1004744bf(lVar4,0);
      if ((((uVar6 & 0xc62) != 0) || (uVar6 = FUN_100474dd0(lVar4,0), (uVar6 & 0x200004) != 0)) &&
         ((((*(byte *)(lVar4 + 0xc5) & 2) == 0 || (cVar3 = FUN_10047669e(lVar4), cVar3 == '\0')) &&
          (*(int *)(lVar4 + 0x144) == 0)))) {
        *param_3 = *param_3 + 1;
      }
    }
  }
LAB_100490168:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

