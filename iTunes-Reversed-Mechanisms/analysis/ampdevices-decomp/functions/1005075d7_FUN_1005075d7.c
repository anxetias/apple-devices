// name: FUN_1005075d7
// address: 1005075d7

long FUN_1005075d7(long param_1,int *param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 **local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  long local_80;
  long lStack_78;
  ulong local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined6 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  local_88 = &local_80;
  local_80 = 0;
  lStack_78 = 0;
  local_60 = 0;
  local_c0 = &local_b8;
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  local_a8 = &local_a0;
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  lVar5 = FUN_1002f930c(*(undefined8 *)(param_1 + 0x30));
  local_90 = 0;
  do {
    if (lVar5 == 0) {
LAB_10050796e:
      if (local_60 != 0) {
        FUN_1004152d5(&local_60,0);
      }
      lVar5 = local_68;
      FUN_1002a41f4(&local_a8,local_a0);
      FUN_1002a41f4(&local_c0,local_b8);
      FUN_1002a41f4(&local_88,local_80);
      if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return lVar5;
    }
    lVar1 = *(long *)(lVar5 + 0x58);
    cVar2 = FUN_100507ca4(lVar1);
    if (cVar2 != '\0') {
      cVar2 = FUN_10044acc3(lVar5);
      if ((cVar2 == '\0') && (-1 < *(int *)(lVar5 + 0xc2))) {
        if (param_2 != (int *)0x0) {
          *param_2 = *param_2 + 1;
        }
        if (*(char *)(param_1 + 0x6abf) == '\0') {
          if ((char)local_90 == '\0') {
            uVar6 = FUN_1004e0c3f(param_1,1);
            FUN_1002b1d9f(&local_58,uVar6);
            FUN_1002a41f4(&local_88,local_80);
            local_88 = local_58;
            local_80 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
            lStack_78 = CONCAT62(uStack_46,uStack_48);
            if (lStack_78 == 0) {
              local_88 = &local_80;
              lVar7 = local_80;
            }
            else {
              *(long **)(local_80 + 0x10) = &local_80;
              local_58 = (long *)&local_50;
              local_50 = 0;
              uStack_4c = 0;
              uStack_4a = 0;
              uStack_48 = 0;
              uStack_46 = 0;
              lVar7 = 0;
            }
            FUN_1002a41f4(&local_58,lVar7);
          }
          if (((lVar1 == 0) || (*(long *)(lVar1 + 8) == 0)) ||
             (*(long *)(*(long *)(lVar1 + 8) + 0x10) == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x38);
          }
          uVar8 = 0;
          lVar7 = FUN_1002b231f(&local_88,uVar6,0,1,100,2,0,
                                *(undefined8 *)(*(long *)(lVar1 + 0x10) + 8));
          local_90 = CONCAT71((int7)((ulong)uVar8 >> 8),1);
          if (lVar7 != 0) goto LAB_100507781;
        }
        else {
LAB_100507781:
          local_70 = *(ulong *)(*(long *)(lVar1 + 0x10) + 8);
          for (puVar9 = local_b8; puVar10 = local_a0, puVar9 != (undefined8 *)0x0;
              puVar9 = (undefined8 *)*puVar9) {
            if ((ulong)puVar9[4] <= local_70) {
              if (local_70 <= (ulong)puVar9[4]) goto LAB_10050767a;
              puVar9 = puVar9 + 1;
            }
          }
          for (; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
            if ((ulong)puVar10[4] <= local_70) {
              if (local_70 <= (ulong)puVar10[4]) goto LAB_10050780d;
              puVar10 = puVar10 + 1;
            }
          }
          if (local_60 == 0) {
            iVar4 = FUN_10041503c(0,&local_60,0);
            if ((iVar4 != -0x80) && (iVar4 != 0)) {
              uVar6 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar6,0x10);
              if (cVar2 != '\0') {
                local_58._0_4_ = 0x8220202;
                local_58._4_4_ = 0x7a0a90;
                local_50 = 1;
                uStack_4c = 0x400;
                uStack_4a = (undefined2)iVar4;
                uStack_48 = (undefined2)((uint)iVar4 >> 0x10);
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
          }
          uVar3 = FUN_10041576c(local_60);
          iVar4 = FUN_1000e0dc0(uVar3,local_70,0);
          if (iVar4 == 0) {
            FUN_1002b7e7c(&local_c0);
            goto LAB_10050767a;
          }
          FUN_1002b7e7c(&local_a8,&local_70);
        }
LAB_10050780d:
        if (local_68 == 0) {
          iVar4 = FUN_100594adc(&local_68,0);
          if (iVar4 != 0) {
            if (iVar4 != -0x80) {
              uVar6 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar6,0x10);
              if (cVar2 != '\0') {
                local_58._0_4_ = 0x8220202;
                local_58._4_4_ = 0x7a0a90;
                local_50 = 1;
                uStack_4c = 0x400;
                uStack_4a = (undefined2)iVar4;
                uStack_48 = (undefined2)((uint)iVar4 >> 0x10);
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            goto LAB_10050796e;
          }
        }
        iVar4 = FUN_10059563f(local_68,lVar5,0);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6);
          if (cVar2 != '\0') {
            local_58._0_4_ = 0x8220202;
            local_58._4_4_ = 0x7a0a90;
            local_50 = 1;
            uStack_4c = 0x400;
            uStack_4a = (undefined2)iVar4;
            uStack_48 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
    }
LAB_10050767a:
    lVar5 = FUN_1002f9451(lVar5);
  } while( true );
}

