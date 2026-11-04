// name: FUN_10029558c
// address: 10029558c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10029558c(long param_1,undefined4 param_2,uint *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  undefined1 local_e4 [62];
  undefined1 local_a6 [14];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_80 [8];
  undefined8 local_78;
  uint local_6c;
  undefined8 local_68;
  uint local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_68 = CONCAT44(local_68._4_4_,param_2);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = param_4;
  if (*(char *)(param_1 + 0xd21) == '\0') {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "connectionData->playerOpen";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
    FUN_1001782e9(0,0);
    iVar6 = -0x32;
    goto LAB_100295aaa;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  iVar6 = -0x32;
  if (iVar2 < 0x48545450) {
    if ((iVar2 != 0x44574e4c) && (iVar2 != 0x46494c45)) goto LAB_100295aaa;
  }
  else {
    if ((iVar2 == 0x48545450) || (iVar2 == 0x53485244)) {
      local_5c[0] = 0x10000;
      if (*(char *)(param_1 + 0x5a51) != '\0') {
        uVar5 = 0;
        uVar7 = FUN_100299fc5(0,param_1,0,param_2,param_3);
        dVar13 = ((double)*(int *)(param_1 + 0xd28) / _DAT_100708b48) * (double)*param_3;
        uVar9 = (ulong)dVar13;
        uVar9 = (long)(dVar13 - DAT_10070e4c0) & (long)uVar9 >> 0x3f | uVar9;
        *(ulong *)(param_1 + 0xd60) = uVar9;
        lVar10 = *(long *)(param_1 + 0xcd8);
        if (*(char *)(lVar10 + 0x10) != '\0') {
          uVar5 = (undefined4)(uVar9 / *(uint *)(lVar10 + 0x30));
        }
        *(undefined4 *)(param_1 + 0xd30) = uVar5;
        plVar3 = *(long **)(param_1 + 0xca8);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x1d0))(plVar3);
          FUN_1001ed4ad(*(undefined8 *)(param_1 + 0xcd0),0x7fffffffffffffff);
          FUN_100295c56(param_1 + 0xca8);
          lVar10 = *(long *)(param_1 + 0xcd8);
        }
        FUN_100270a1c(lVar10);
        FUN_10057db47(*(undefined8 *)(*(long *)(param_1 + 8) + 8),
                      *(undefined8 *)(*(long *)(param_1 + 8) + 0x10),0x73627566,local_5c);
        *(undefined1 *)(param_1 + 0x5e60) = 0;
        iVar6 = FUN_100293fc2(param_1,param_5,0,param_1 + 0xca8,*(long *)(param_1 + 0xcd8),
                              *(long *)(param_1 + 0xcd8) + 0x10,param_1 + 0x5a54,param_1 + 0x5e60,
                              uVar7,local_5c[0],0,0,0,0,0);
        if (*(int *)(param_1 + 0x10) == 0x48545450) {
          if (iVar6 == 0) {
            iVar6 = FUN_100295c9b(param_1,param_3,local_78);
            *(ulong *)(param_1 + 0xd48) = (ulong)uVar7;
          }
        }
        else {
          *(ulong *)(param_1 + 0xd48) = (ulong)uVar7 + *(long *)(param_1 + 0xd38);
          if (*param_3 == 0) {
            *(undefined8 *)(param_1 + 0xd70) = *(undefined8 *)(param_1 + 0xd80);
            *(undefined8 *)(param_1 + 0xd78) = *(undefined8 *)(param_1 + 0xd80);
          }
          if ((*(char *)(param_1 + 0x5a50) == '\0') &&
             (lVar10 = FUN_1001c63e1((ulong)(uint)(*(int *)(*(long *)(param_1 + 0xcd8) + 0x30) * 2)
                                     << 3), lVar10 != 0)) {
            iVar6 = FUN_100295c9b(param_1,&local_6c,local_80);
            if (iVar6 == 0) {
              do {
                if (((uint)local_68 <= local_6c) ||
                   (iVar6 = FUN_10029a1c1(param_1,lVar10), iVar6 != 0)) goto LAB_100295a43;
                iVar6 = FUN_100295c9b(param_1,&local_6c,local_80);
              } while (iVar6 == 0);
            }
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12
                                 );
            }
LAB_100295a43:
            FUN_1001c64c1(lVar10);
          }
          iVar6 = FUN_100295c9b(param_1,param_3,local_78);
        }
      }
      goto LAB_100295aaa;
    }
    if (iVar2 != 0x4d46494c) goto LAB_100295aaa;
  }
  uVar5 = FUN_100299fc5(param_1,1,param_2,param_3);
  (**(code **)(**(long **)(param_1 + 0xca8) + 0xf0))(*(long **)(param_1 + 0xca8),uVar5);
  plVar3 = *(long **)(param_1 + 0xcb0);
  local_98 = *(undefined4 *)(param_1 + 0xca8);
  uStack_94 = *(undefined4 *)(param_1 + 0xcac);
  uStack_90 = *(undefined4 *)(param_1 + 0xcb0);
  uStack_8c = *(undefined4 *)(param_1 + 0xcb4);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  lVar10 = 0;
  if (*(char *)(param_1 + 0xd20) != '\0') {
    lVar10 = param_1 + 0xce4;
  }
  iVar6 = FUN_100298e0d(&local_98,local_a6,local_e4,lVar10);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((iVar6 != -0x80) && (iVar6 != 0)) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
    }
  }
  (**(code **)(**(long **)(param_1 + 0xca8) + 0xf8))(*(long **)(param_1 + 0xca8),param_1 + 0xd48);
  FUN_100270a1c(*(undefined8 *)(param_1 + 0xcd8));
  dVar13 = ((double)*(int *)(param_1 + 0xd28) / _DAT_100708b48) * (double)*param_3;
  uVar11 = (ulong)dVar13;
  uVar12 = (long)uVar11 >> 0x3f;
  uVar9 = (long)(dVar13 - DAT_10070e4c0) & uVar12 | uVar11;
  *(ulong *)(param_1 + 0xd60) = uVar9;
  lVar10 = *(long *)(param_1 + 0xcd8);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    uVar5 = 0;
  }
  else {
    uVar12 = (ulong)*(uint *)(lVar10 + 0x30);
    uVar5 = (undefined4)(uVar9 / uVar12);
    uVar11 = uVar9 % uVar12;
  }
  *(undefined4 *)(param_1 + 0xd30) = uVar5;
  if (*param_3 == 0) {
    *(undefined8 *)(param_1 + 0xd70) = *(undefined8 *)(param_1 + 0xd80);
    *(undefined8 *)(param_1 + 0xd78) = *(undefined8 *)(param_1 + 0xd80);
  }
  if ((*(char *)(param_1 + 0x5a50) == '\0') &&
     (lVar10 = FUN_1001c63e1((ulong)(uint)(*(int *)(lVar10 + 0x30) * 2) << 3,uVar12,uVar11),
     lVar10 != 0)) {
    iVar6 = FUN_100295c9b(param_1,local_5c,local_80);
    while (iVar6 == 0) {
      if (((uint)local_68 <= local_5c[0]) || (iVar6 = FUN_10029a1c1(param_1,lVar10), iVar6 != 0))
      goto LAB_100295a7d;
      iVar6 = FUN_100295c9b(param_1,local_5c,local_80);
    }
    local_68 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(local_68,0x10);
    if (cVar4 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
      __os_log_error_impl(0x100000000,local_68,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
    }
LAB_100295a7d:
    FUN_1001c64c1(lVar10);
  }
  iVar6 = FUN_100295c9b(param_1,param_3,local_78);
  (**(code **)(**(long **)(param_1 + 0xca8) + 0xf8))(*(long **)(param_1 + 0xca8),param_1 + 0xd48);
LAB_100295aaa:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

