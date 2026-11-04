// name: FUN_1005ebb04
// address: 1005ebb04

void FUN_1005ebb04(undefined8 param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [12];
  undefined2 local_8c;
  char *local_8a;
  long *local_78;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1005e9a2c();
  if (param_2 == 0x706f6472) {
    uVar7 = FUN_10026647d(param_1);
    lVar5 = FUN_1005e7484(&DAT_1008c7b60,uVar7);
    if (lVar5 != 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
        FUN_1005ed5a2(&DAT_1008c7b60,lVar5);
        return;
      }
      goto LAB_1005ec1a1;
    }
  }
  else if (param_2 == 0x72617761) {
    lVar5 = FUN_10026647d(param_1);
    cVar2 = FUN_100263428(param_1);
    if (cVar2 == '\0') {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      iVar4 = -0x32;
      if (cVar2 != '\0') {
        local_8a = "ITIPodRefIsValid(podRef)";
        iVar4 = -0x32;
LAB_1005ebec9:
        local_8c = 0x822;
        local_98._4_8_ = "Assertion failure";
        local_98._0_4_ = 0x8220202;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_98,0x16);
      }
LAB_1005ebd5c:
      FUN_1001782e9(0,0);
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_98._0_4_ = 0x8220202;
        local_98._4_8_ = "Assertion failure";
        local_8c = 0x400;
        local_8a = (char *)CONCAT44(local_8a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_98,0x12);
      }
    }
    else {
      if (lVar5 == 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        iVar4 = -0x32;
        if (cVar2 != '\0') {
          local_8a = "serialNumber != 0";
          iVar4 = -0x32;
          goto LAB_1005ebec9;
        }
        goto LAB_1005ebd5c;
      }
      piVar6 = (int *)FUN_1005e7484(&DAT_1008c7b60,lVar5);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)FUN_1001c6429(0x68e8);
        if (piVar6 == (int *)0x0) {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          iVar4 = -0x6c;
          if (cVar2 != '\0') {
            local_8a = "device != nullptr";
            iVar4 = -0x6c;
            goto LAB_1005ebec9;
          }
          goto LAB_1005ebd5c;
        }
        piVar6[0x1a20] = 0x72776970;
        uVar7 = FUN_10026394e(param_1);
        *(undefined8 *)(piVar6 + 0x1a24) = uVar7;
        iVar4 = FUN_1001ea5dc();
        piVar6[0x1a21] = iVar4;
        *(long *)(piVar6 + 2) = lVar5;
        iVar4 = FUN_100266214(*(undefined8 *)(piVar6 + 0x1a24));
        *piVar6 = iVar4;
        cVar2 = FUN_1002669ba(*(undefined8 *)(piVar6 + 0x1a24));
        *(bool *)(piVar6 + 1) = cVar2 != '\0';
        FUN_100248122(*piVar6,0,0);
        FUN_1005f2dc9(&DAT_1008c7bc0,piVar6);
      }
      if (((char)piVar6[0x1a32] != '\0') || (*(char *)((long)piVar6 + 0x68c9) != '\0'))
      goto LAB_1005ebd9b;
      uVar3 = *(undefined1 *)(*(long *)(piVar6 + 0x1a24) + 0x9de);
      iVar4 = FUN_100598b00(*(long *)(piVar6 + 0x1a24),piVar6 + 0x84,0);
      if (iVar4 == -0x80) goto LAB_1005ebd9b;
      if (iVar4 == 0) {
LAB_1005ebc6c:
        *(undefined1 *)((long)piVar6 + 0x4ee) = uVar3;
        if (*(char *)(*(long *)(piVar6 + 0x1a24) + 0x6d63) == '\x02') {
          uVar3 = 0;
          uVar8 = 1;
LAB_1005ebef7:
          *(undefined1 *)(piVar6 + 0x1986) = uVar8;
          *(undefined1 *)((long)piVar6 + 0x6615) = uVar3;
        }
        else if (*(char *)(*(long *)(piVar6 + 0x1a24) + 0x6d63) == '\x03') {
          uVar3 = 1;
          uVar8 = 0;
          goto LAB_1005ebef7;
        }
        if ((*piVar6 == 0x69545620) && ((char)piVar6[1] == '\x01')) {
          *(undefined1 *)((long)piVar6 + 0x68c7) = 1;
        }
        if (*(char *)((long)piVar6 + 0x58a) != '\0') {
          FUN_1001eb60a(local_98);
          FUN_1001b7b04(local_a8,(long)piVar6 + 0x58a);
          iVar4 = FUN_1001e6c16(local_98,local_a8);
          FUN_1001b7a50(local_a8);
          FUN_1001b7a50(local_98);
          if (iVar4 < 0) {
            uVar7 = FUN_100416f20(*piVar6,0x10cc01d3);
            FUN_1001b7eb0(local_a8,uVar7);
            FUN_1001b8dfc(local_d8,piVar6 + 4);
            FUN_1001b7b04(local_98,(long)piVar6 + 0x58a);
            FUN_1001bbf68(local_c8,local_a8,local_d8,local_98);
            FUN_1001b7a50(local_98);
            FUN_1005e73f0(local_b8,piVar6);
            FUN_1005f28ca(local_98,local_c8,local_b8);
            FUN_10017869a(local_98);
            if (local_40 != (long *)0x0) {
              LOCK();
              plVar1 = local_40 + 1;
              lVar5 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar5 == 0) {
                (**(code **)(*local_40 + 0x10))(local_40);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (local_78 == (long *)local_98) {
              lVar5 = 0x20;
LAB_1005ec0c3:
              (**(code **)(*local_78 + lVar5))();
            }
            else {
              lVar5 = 0x28;
              if (local_78 != (long *)0x0) goto LAB_1005ec0c3;
            }
            FUN_1001b7a50(local_b8);
            FUN_1001b7a50(local_c8);
            FUN_1001b7a50(local_d8);
            FUN_1001b7a50(local_a8);
            FUN_1005ed5a2(&DAT_1008c7b60,piVar6);
            goto LAB_1005ebd9b;
          }
        }
        iVar4 = FUN_1005ec89e(&DAT_1008c7b60,piVar6);
        if (iVar4 != -0x80) {
          if (iVar4 != 0) {
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              local_98._0_4_ = 0x8220202;
              local_98._4_8_ = "Assertion failure";
              local_8c = 0x400;
              local_8a = (char *)CONCAT44(local_8a._4_4_,iVar4);
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_98,0x12);
            }
            if (iVar4 != 0) goto LAB_1005ebd82;
          }
          uVar7 = FUN_1001c156e();
          FUN_1001c6987(uVar7,0x72697061,piVar6[0x1a21],0,0);
        }
        goto LAB_1005ebd9b;
      }
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_98._0_4_ = 0x8220202;
        local_98._4_8_ = "Assertion failure";
        local_8c = 0x400;
        local_8a = (char *)CONCAT44(local_8a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_98,0x12);
      }
      if (iVar4 == 0) goto LAB_1005ebc6c;
    }
LAB_1005ebd82:
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_98._0_4_ = 0x8220202;
      local_98._4_8_ = "Assertion failure";
      local_8c = 0x400;
      local_8a = (char *)CONCAT44(local_8a._4_4_,iVar4);
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_98,0x12);
    }
  }
LAB_1005ebd9b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
LAB_1005ec1a1:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

