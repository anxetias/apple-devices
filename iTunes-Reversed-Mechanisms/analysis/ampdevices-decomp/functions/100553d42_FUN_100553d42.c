// name: FUN_100553d42
// address: 100553d42

/* WARNING: Type propagation algorithm not settling */

ulong FUN_100553d42(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_RBX;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 local_58;
  uint local_4c [2];
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = 0;
  if ((*(long **)(param_1 + 0x38) != (long *)0x0) &&
     (cVar3 = (**(code **)(**(long **)(param_1 + 0x38) + 0x78))(), cVar3 == '\0')) {
    uVar7 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if (param_2 == (long *)0x0) goto LAB_100553d82;
    iVar4 = (**(code **)(**(long **)(param_1 + 0x38) + 0x68))
                      (*(long **)(param_1 + 0x38),0,&local_58);
    if (iVar4 != -0x80) {
      if (iVar4 == 0) {
        iVar4 = FUN_1005dadc0(param_1 + 0x7f8,local_58,local_4c);
        if (iVar4 != -0x80) {
          if (iVar4 == 0) {
            if ((int)local_4c[0] < *(int *)(param_1 + 0x1474)) {
              lVar2 = *(long *)(param_1 + 0x808);
              lVar6 = 0;
              if ((ulong)*(uint *)(lVar2 + 0xc) != 0) {
                uVar9 = 0;
                lVar8 = 0;
                uVar10 = 0;
                do {
                  uVar1 = *(uint *)(lVar2 + 0x10 + uVar9 * 8);
                  iVar4 = *(int *)(lVar2 + 0x14 + uVar9 * 8);
                  uVar11 = uVar1 + uVar10;
                  if (local_4c[0] < uVar11) {
                    lVar6 = (ulong)(local_4c[0] - uVar10) * (long)iVar4 + lVar8;
                    break;
                  }
                  lVar8 = lVar8 + (ulong)uVar1 * (long)iVar4;
                  uVar9 = uVar9 + 1;
                  uVar10 = uVar11;
                } while (*(uint *)(lVar2 + 0xc) != uVar9);
                if (iVar4 != 0) goto LAB_100553f35;
              }
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_4c[1] = 0x8220202;
                local_44 = "Assertion failure";
                local_3c = 0x822;
                local_3a = "durationInFrames != 0";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_4c + 1,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            else {
              lVar6 = 0;
            }
LAB_100553f35:
            *param_2 = lVar6;
            goto LAB_100553d82;
          }
          uVar7 = 0;
          if (iVar4 == 0x2351) goto LAB_100553d82;
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
            goto LAB_100553e98;
          }
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
LAB_100553e98:
          local_3c = 0x400;
          local_44 = "Assertion failure";
          local_4c[1] = 0x8220202;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_4c + 1,0x12);
        }
      }
    }
  }
  uVar7 = 0;
LAB_100553d82:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7 & 0xffffffff;
}

