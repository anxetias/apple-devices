// name: FUN_10054bb72
// address: 10054bb72

int FUN_10054bb72(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 local_2f8 [8];
  long local_2f0;
  long local_2c0;
  long local_290;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  ulong local_248;
  ulong local_240;
  uint *local_230;
  long local_228;
  undefined8 *local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined2 uStack_20c;
  undefined2 uStack_20a;
  undefined2 uStack_208;
  undefined4 uStack_206;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x710) == 0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_218 = 0x8220202;
      uStack_214 = 0x7a0a90;
      local_210 = 1;
      uStack_20c = 0x822;
      uStack_20a = 0x6c55;
      uStack_208 = 0x7e;
      uStack_206 = 1;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_218,0x16);
    }
    FUN_1001782e9(0,0);
    iVar6 = -0x32;
    goto LAB_10054c1f0;
  }
  FUN_1001c62d9(param_1 + 0x718,0x20);
  FUN_1001c62d9((void *)(param_1 + 0x748),0xb0);
  local_228 = param_1 + 0x7f8;
  FUN_1001c62d9(local_228,0x48);
  *(undefined8 *)(param_1 + 0x738) = 0;
  *(undefined4 *)(param_1 + 0x6400) = 0;
  if (*(void **)(param_1 + 0x6408) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x6408));
  }
  *(undefined8 *)(param_1 + 0x6408) = 0;
  lVar3 = *(long *)(param_1 + 0x710);
  *(undefined8 *)(param_1 + 0x718) = *(undefined8 *)(lVar3 + 0x20);
  iVar6 = FUN_10015d28d(lVar3,0x6d766864,&local_220);
  if ((param_2 >> 9 & 1) == 0) {
    if (iVar6 == -0x80) goto LAB_10054c1f0;
    if (iVar6 != 0) {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        uStack_20a = (undefined2)iVar6;
        uStack_208 = (undefined2)((uint)iVar6 >> 0x10);
LAB_10054bf0d:
        local_210 = 1;
        uStack_214 = 0x7a0a90;
        uStack_20c = 0x400;
        local_218 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_218,0x12);
      }
      goto LAB_10054c1f0;
    }
    if (local_220 != (undefined8 *)0x0) goto LAB_10054bcb9;
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_218 = 0x8220202;
      uStack_214 = 0x7a0a90;
      local_210 = 1;
      uStack_20c = 0x822;
      uStack_20a = 0x6e1;
      uStack_208 = 0x7a;
      uStack_206 = 1;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_218,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (local_220 == (undefined8 *)0x0) {
      iVar6 = -0xd0;
    }
    if (iVar6 != 0) goto LAB_10054c1f0;
LAB_10054bcb9:
    *(undefined8 *)(param_1 + 0x720) = local_220[4];
    iVar6 = FUN_10015d28d(lVar3,0x75647461,&local_220);
    if (local_220 != (undefined8 *)0x0 && iVar6 == 0) {
      *(undefined8 *)(param_1 + 0x730) = local_220[4];
    }
    iVar7 = -0xd0;
    for (local_220 = *(undefined8 **)(lVar3 + 0x10); local_220 != (undefined8 *)0x0;
        local_220 = (undefined8 *)*local_220) {
      if (*(int *)(local_220[4] + 4) == 0x6b617274) {
        iVar6 = FUN_1005d987a(local_220,local_2f8);
        if (iVar6 != 0) {
          if (iVar6 == -0x80) goto LAB_10054c1f0;
          uVar8 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar8,0x10);
          if (cVar5 == '\0') goto LAB_10054c1f0;
          uStack_20a = (undefined2)iVar6;
          uStack_208 = (undefined2)((uint)iVar6 >> 0x10);
          goto LAB_10054bf0d;
        }
        if (((local_2c0 != 0 & *(byte *)(local_2f0 + 0xb)) == 1) &&
           (*(int *)(local_2c0 + 0x10) == 0x6e756f73)) {
          if ((local_290 == 0) || (*(int *)(local_290 + 0xc) != 0x1000000)) goto LAB_10054be25;
          uVar9 = *(uint *)(local_290 + 0x14);
          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          bVar4 = false;
          if ((int)uVar9 < 0x64726d73) {
            if ((uVar9 == 0x61617664) || (uVar9 == 0x616c6163)) {
LAB_10054bdba:
              iVar6 = FUN_10054c380(local_290 + 0x10,&local_230,0,0);
              if (local_230 != (uint *)0x0 && iVar6 == 0) {
                bVar4 = true;
                if (local_230[1] != 0x73647365) goto LAB_10054be27;
                uVar9 = *local_230;
                uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                        uVar9 << 0x18;
                if (0xc < uVar9) {
                  FUN_10015fb7e(&local_248,local_230 + 3,uVar9 - 0xc);
                  iVar6 = FUN_1005d55b0(&local_248,&local_218);
                  if (iVar6 == 0) {
                    bVar4 = local_248 <= local_240;
                    goto LAB_10054be27;
                  }
                }
              }
LAB_10054be25:
              bVar4 = false;
            }
          }
          else if ((uVar9 == 0x6d703461) || (bVar4 = false, uVar9 == 0x64726d73))
          goto LAB_10054bdba;
LAB_10054be27:
          if (((param_2 >> 9 & 1) != 0) || (bVar4)) {
            _memcpy((void *)(param_1 + 0x748),local_2f8,0xb0);
            *(undefined8 **)(param_1 + 0x738) = local_220;
            *(undefined4 *)(param_1 + 0x840) = local_270;
            *(undefined4 *)(param_1 + 0x844) = uStack_26c;
            *(undefined4 *)(param_1 + 0x848) = uStack_268;
            *(undefined4 *)(param_1 + 0x84c) = uStack_264;
            iVar7 = FUN_1005da1cc(param_1 + 0x7a8,local_228);
            iVar6 = iVar7;
            if (iVar7 == -0x80) goto LAB_10054c1f0;
            if (iVar7 != 0) {
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 == '\0') goto LAB_10054c1f0;
              uStack_20a = (undefined2)iVar7;
              uStack_208 = (undefined2)((uint)iVar7 >> 0x10);
              goto LAB_10054bf0d;
            }
            break;
          }
        }
      }
    }
    iVar6 = 0;
    if (((param_2 >> 8 & 1) != 0) || (iVar6 = iVar7, *(long *)(param_1 + 0x738) != 0)) {
      plVar2 = (long *)(param_1 + 0x710);
      if (*plVar2 == 0) {
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          local_218 = 0x8220202;
          uStack_214 = 0x7a0a90;
          local_210 = 1;
          uStack_20c = 0x822;
          uStack_20a = 0x6c55;
          uStack_208 = 0x7e;
          uStack_206 = 1;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_218,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        if (*(long *)(param_1 + 0x6410) != 0) {
          FUN_100175848();
          *(undefined8 *)(param_1 + 0x6410) = 0;
        }
        *(undefined4 *)(param_1 + 0x6400) = 0;
        if (*(void **)(param_1 + 0x6408) != (void *)0x0) {
          operator_delete__(*(void **)(param_1 + 0x6408));
        }
        *(undefined8 *)(param_1 + 0x6408) = 0;
        uVar9 = param_2 >> 6 & 3;
        local_218 = (undefined4)*(undefined8 *)(param_1 + 0x38);
        uStack_214 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
        if ((*(int *)(param_1 + 0x48) == 0x53485244) || (*(int *)(param_1 + 0x48) == 0x48545450)) {
          lVar3 = *(long *)(param_1 + 0x40);
          local_210 = (undefined4)lVar3;
          uStack_20c = (undefined2)((ulong)lVar3 >> 0x20);
          uStack_20a = (undefined2)((ulong)lVar3 >> 0x30);
          if (lVar3 != 0) {
            LOCK();
            *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          FUN_1005db029(plVar2,&local_218,uVar9,0xffffffff,0,param_1 + 0x6400);
          plVar2 = (long *)CONCAT26(uStack_20a,CONCAT24(uStack_20c,local_210));
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar3 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        else {
          lVar3 = *(long *)(param_1 + 0x40);
          local_210 = (undefined4)lVar3;
          uStack_20c = (undefined2)((ulong)lVar3 >> 0x20);
          uStack_20a = (undefined2)((ulong)lVar3 >> 0x30);
          if (lVar3 != 0) {
            LOCK();
            *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          FUN_1005db029(plVar2,&local_218,uVar9,0xffffffff,(undefined8 *)(param_1 + 0x6410),
                        param_1 + 0x6400);
          plVar2 = (long *)CONCAT26(uStack_20a,CONCAT24(uStack_20c,local_210));
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar3 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              std::__shared_weak_count::__release_weak();
            }
          }
          (**(code **)(**(long **)(param_1 + 0x38) + 0xf0))(*(long **)(param_1 + 0x38),0);
          *(undefined8 *)(param_1 + 0x1030) = 0;
        }
      }
      goto LAB_10054c1f0;
    }
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_218 = 0x8220202;
      uStack_214 = 0x7a0a90;
      local_210 = 1;
      uStack_20c = 0x822;
      uStack_20a = 0x6c6f;
      uStack_208 = 0x7e;
      uStack_206 = 1;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_218,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar6 = -0xd0;
LAB_10054c1f0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

