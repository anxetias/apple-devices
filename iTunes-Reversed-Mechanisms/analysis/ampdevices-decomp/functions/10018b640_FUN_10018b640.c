// name: FUN_10018b640
// address: 10018b640

void FUN_10018b640(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long local_78;
  undefined4 local_6c;
  long local_68;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      FUN_100690bcf(uVar7);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = *(long *)(param_2 + 0x60);
    uVar11 = *(ulong *)(param_2 + 0x68);
    lVar8 = lVar2;
    if (uVar11 != 0) {
      local_6c = (undefined4)CONCAT71((int7)((ulong)local_38 >> 8),*(undefined1 *)(param_2 + 0x88));
      lVar9 = *(long *)(param_2 + 0x78);
      lVar3 = *(long *)(lVar2 + 0x30);
      lVar4 = *(long *)(param_2 + 0x90);
      local_68 = lVar2;
      local_60 = param_2;
      do {
        uVar10 = (ulong)*(uint *)(local_60 + 0x84);
        if (uVar11 < *(uint *)(local_60 + 0x84)) {
          uVar10 = uVar11;
        }
        iVar6 = FUN_10017d230(*(undefined8 *)(lVar4 + 0x10),lVar9,uVar10,1,&local_78);
        if ((iVar6 == -0x27) && ((char)local_6c != '\0')) {
          iVar6 = FUN_10017cfbe(*(undefined8 *)(lVar4 + 0x10),&local_58);
          if (iVar6 != 0) {
            lVar8 = local_68;
            param_2 = local_60;
            if (iVar6 != -0x80) {
              uVar7 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar7,0x10);
              param_2 = local_60;
              lVar8 = local_68;
              if (cVar5 != '\0') {
                FUN_100690b63(iVar6,uVar7);
                lVar8 = local_68;
              }
            }
            goto LAB_10018b91c;
          }
          iVar6 = FUN_10017cf3c(*(undefined8 *)(lVar4 + 0x10),
                                *(long *)(lVar4 + 0x20) + CONCAT44(uStack_54,local_58));
          if (iVar6 != 0) {
            lVar8 = local_68;
            param_2 = local_60;
            if (iVar6 != -0x80) {
              uVar7 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar7,0x10);
              param_2 = local_60;
              lVar8 = local_68;
              if (cVar5 != '\0') {
                FUN_100690af7(iVar6,uVar7);
                lVar8 = local_68;
              }
            }
            goto LAB_10018b91c;
          }
          iVar6 = FUN_10017d068(*(undefined8 *)(lVar4 + 0x10),CONCAT44(uStack_54,local_58));
          if (iVar6 != 0) {
            lVar8 = local_68;
            param_2 = local_60;
            if (iVar6 != -0x80) {
              uVar7 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar7,0x10);
              param_2 = local_60;
              lVar8 = local_68;
              if (cVar5 != '\0') {
                FUN_100690a8b(iVar6,uVar7);
                lVar8 = local_68;
              }
            }
            goto LAB_10018b91c;
          }
          iVar6 = FUN_10017d230(*(undefined8 *)(lVar4 + 0x10),lVar9,uVar10,1,&local_78);
          local_6c = 0;
        }
        lVar8 = local_78;
        if (iVar6 != 0) {
          lVar8 = local_68;
          param_2 = local_60;
          if (iVar6 != -0x80) {
            uVar7 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar7,0x10);
            param_2 = local_60;
            lVar8 = local_68;
            if (cVar5 != '\0') {
              FUN_100690a1f(iVar6,uVar7);
              lVar8 = local_68;
            }
          }
          goto LAB_10018b91c;
        }
        if (*(char *)(local_68 + 0x8c) == '\0') {
          iVar6 = FUN_1001e9de0(lVar2 + 0x40);
          if ((iVar6 != -0x80) && (iVar6 != 0)) {
            uVar7 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar7,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x400;
              local_4a = iVar6;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          plVar1 = (long *)(lVar3 + 0x2d8);
          *plVar1 = *plVar1 + local_78;
          iVar6 = *(int *)(local_68 + 0x90);
          if (*(char *)(lVar3 + 3) == '\0') {
            FUN_1001e8f15(lVar2 + 0x10);
          }
          else {
            FUN_1001e9809();
          }
          FUN_1001e9eb9(lVar2 + 0x40);
          if (iVar6 != 0) {
            lVar8 = local_68;
            param_2 = local_60;
            if (iVar6 != -0x80) {
              uVar7 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar7,0x10);
              param_2 = local_60;
              lVar8 = local_68;
              if (cVar5 != '\0') {
                FUN_1006909b3(iVar6,uVar7);
                lVar8 = local_68;
              }
            }
            goto LAB_10018b91c;
          }
        }
        uVar11 = uVar11 - lVar8;
        lVar9 = lVar9 + lVar8;
        lVar8 = local_68;
        param_2 = local_60;
      } while (uVar11 != 0);
    }
    iVar6 = 0;
LAB_10018b91c:
    *(int *)(param_2 + 0x98) = iVar6;
    *(code **)(param_2 + 0x40) = FUN_10018ab13;
    *(long *)(param_2 + 0x48) = param_2;
    FUN_1001ecf95(*(undefined8 *)(lVar8 + 0xa8),param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

