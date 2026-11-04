// name: FUN_100115ae4
// address: 100115ae4

void FUN_100115ae4(long param_1,long param_2,long param_3,void *param_4,long param_5)

{
  int iVar1;
  long lVar2;
  float fVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  undefined1 local_f8 [192];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0xc136) == '\0') {
    if (*(char *)(param_1 + 0xc137) == '\0') {
      if ((uint)*(byte *)((long)param_4 + 0x115) - (uint)*(byte *)(param_1 + 0xaa) ==
          (uint)*(byte *)(param_3 + 0xbbe)) goto LAB_100115c05;
      if (*(char *)(param_3 + 0xe85) != '\x01') {
        *(undefined1 *)(param_1 + 0xc136) = 1;
        goto LAB_100115b30;
      }
      *(undefined1 *)(param_1 + 0xc137) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xc137) == '\0') {
LAB_100115b30:
    FUN_100116592(param_1,param_3,param_4,*(undefined8 *)(param_2 + 0x18));
    fVar3 = DAT_100700b28;
    iVar4 = *(int *)(param_3 + 0xc10);
    iVar1 = *(int *)((long)param_4 + 0xfc);
    if ((iVar4 != iVar1) && (lVar2 = *(long *)(param_2 + 0x18), *(char *)(lVar2 + 1) != '\0')) {
      uVar5 = 0;
      do {
        if (iVar1 == 2) {
          fVar6 = *(float *)(param_5 + uVar5 * 4);
LAB_100115b9b:
          *(float *)((long)param_4 + uVar5 * 4) = fVar6;
        }
        else if (iVar4 == 2) {
          *(undefined4 *)((long)param_4 + uVar5 * 4) = 0x41400000;
        }
        else if (iVar4 == 1) {
          fVar6 = (*(float *)((long)param_4 + uVar5 * 4) + *(float *)(param_5 + uVar5 * 4)) * fVar3;
          goto LAB_100115b9b;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(byte *)(lVar2 + 1));
    }
LAB_100115c05:
    _memcpy(local_f8,param_4,0xc0);
    FUN_1001162c4(param_1,param_2,param_3,param_4);
    iVar4 = FUN_100116656();
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0xc137) = 1;
      _memcpy(param_4,local_f8,0xc0);
      FUN_100115ae4(param_1,param_2,param_3,param_4,param_5);
    }
    goto LAB_100115c6b;
  }
  FUN_1001160fc(param_1,param_2,param_3,param_4);
  FUN_1001162c4(param_1,param_2,param_3,param_4);
LAB_100115c6b:
  iVar4 = FUN_1001166e6(param_1,param_3,*(undefined4 *)(param_3 + 3000));
  if (iVar4 != 0) {
    *(undefined1 *)(param_1 + 0xc137) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

