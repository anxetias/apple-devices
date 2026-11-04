// name: FUN_100482222
// address: 100482222

ulong FUN_100482222(int *param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_1004822df:
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "PlaylistIsValid(playlist)";
LAB_10048245b:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1004822df;
    }
    lVar6 = *(long *)(param_1 + 2);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x80) != 0x74646174) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure (expected to be true)";
          local_3c = 0x822;
          local_3a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') goto LAB_100482321;
      }
      if ((*(byte *)(lVar6 + 0x1bb4) & 0x40) == 0) {
LAB_1004822da:
        uVar7 = 0;
        goto LAB_10048234a;
      }
      uVar7 = (ulong)*(byte *)(param_1 + 8);
      if (*(byte *)(param_1 + 8) != 0) goto LAB_10048234a;
      if (((uint)param_1[0x90] >> 0x16 & 1) == 0) goto LAB_1004822da;
      if ((param_1[0x90] & 4U) == 0) {
        if (((*(byte *)(param_1 + 0xa6) & 3) != 1) || (iVar3 = FUN_100582488(param_1), iVar3 == 0))
        {
LAB_100482485:
          for (lVar6 = FUN_100485529(param_1); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x18)) {
            uVar4 = FUN_100474865(*(undefined8 *)(lVar6 + 8));
            if ((char)uVar4 != '\0') {
              uVar7 = (ulong)uVar4;
              goto LAB_1004824b0;
            }
          }
          goto LAB_1004824ad;
        }
        cVar1 = FUN_100491b78(iVar3);
        bVar2 = cVar1 - 1;
        if ((7 < bVar2) || ((0x8bU >> (bVar2 & 0x1f) & 1) == 0)) goto LAB_100482485;
        uVar7 = 0x801010104010201 >> ((bVar2 & 7) << 3);
      }
      else {
LAB_1004824ad:
        uVar7 = 0;
      }
LAB_1004824b0:
      if (param_2 != '\0') {
        *(char *)(param_1 + 8) = (char)uVar7;
      }
      goto LAB_10048234a;
    }
LAB_100482321:
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "TrackDataIsValid(trackData)";
      goto LAB_10048245b;
    }
  }
  uVar7 = 0;
  FUN_1001782e9(0,0);
LAB_10048234a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar7 & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

