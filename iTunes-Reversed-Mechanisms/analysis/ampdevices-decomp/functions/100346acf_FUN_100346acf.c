// name: FUN_100346acf
// address: 100346acf

long FUN_100346acf(long param_1,long *param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_2[2] == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    local_60 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = FUN_10017076e(*(undefined8 *)(param_1 + 0x16710));
    if (lVar4 < 1) {
      local_60 = 0;
    }
    else {
      uVar7 = lVar4 + 1;
      local_60 = 0;
      do {
        uVar5 = FUN_10016499b(*(undefined8 *)(param_1 + 0x16710),uVar7 - 2);
        uVar6 = FUN_100166c1b(uVar5,&cf_operation);
        cVar1 = FUN_100170633(uVar6,&cf_update_track);
        if (cVar1 != '\0') {
          cVar1 = FUN_100167ab3(uVar5,&cf_pid,&local_58);
          if ((cVar1 != '\0') && (CONCAT44(uStack_54,local_58) == *param_2)) {
            if (local_60 == 0) {
              local_60 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                       PTR__kCFTypeDictionaryValueCallBacks_10082e140);
            }
            FUN_1001714c2(uVar5,FUN_10033d5bc);
            FUN_100170bed(*(undefined8 *)(param_1 + 0x16710),uVar7 - 2);
          }
        }
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
      if ((param_3 != (int *)0x0) && (local_60 != 0)) {
        uVar2 = FUN_1004744bf(param_2,0);
        if ((uVar2 & 0xfe2fbfff) == 0) {
          if ((uVar2 & 0x1004000) == 0) {
            if ((uVar2 >> 0x14 & 1) == 0) {
              if (uVar2 == 0) {
                *param_3 = 0;
                goto LAB_100346d06;
              }
              iVar3 = *(int *)(param_1 + 0x167a8) + 1;
              *(int *)(param_1 + 0x167a8) = iVar3;
            }
            else {
              iVar3 = *(int *)(param_1 + 0x16770) + 1;
              *(int *)(param_1 + 0x16770) = iVar3;
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0x16738) + 1;
            *(int *)(param_1 + 0x16738) = iVar3;
          }
        }
        else {
          iVar3 = *(int *)(param_1 + 0x16700) + 1;
          *(int *)(param_1 + 0x16700) = iVar3;
        }
        *param_3 = iVar3;
      }
    }
  }
LAB_100346d06:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

