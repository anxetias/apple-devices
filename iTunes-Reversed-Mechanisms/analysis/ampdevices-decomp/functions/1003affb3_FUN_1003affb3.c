// name: FUN_1003affb3
// address: 1003affb3

int FUN_1003affb3(undefined8 param_1,long param_2,int *param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_80;
  undefined4 local_7c;
  long local_78;
  long local_70;
  int local_68;
  int local_64;
  int local_60;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  iVar4 = 0;
  iVar3 = FUN_1001c955b(param_1,0x636f7672,0,0,&local_78);
  if (local_78 != 0 && iVar3 == 0) {
    FUN_1001ca647(local_78,&local_68);
    if (0x80 < local_68) {
      local_68 = 0x80;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = *param_3 + local_68;
    }
    if (0 < local_68) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        iVar4 = FUN_1001ca7a7(local_78,iVar3,&local_59,&local_60);
        if (iVar4 != 0) {
          if (iVar4 == -0x80) {
            iVar4 = -0x80;
          }
          else {
LAB_1003b028c:
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 != '\0') {
LAB_1003b02fa:
              local_4a = iVar4;
              iVar4 = local_4a;
              local_4c = 0x400;
              uStack_50 = 1;
              uStack_54 = 0x7a0a90;
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          goto LAB_1003b02a5;
        }
        if (local_60 == 0) {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          iVar4 = -0x13;
          if (cVar2 != '\0') {
            local_4a = -0x13;
            iVar4 = local_4a;
            goto LAB_1003b02fa;
          }
          goto LAB_1003b02a5;
        }
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + local_60;
        }
        if (param_2 != 0) {
          lVar5 = FUN_1001c63e1();
          if (lVar5 == 0) {
            iVar4 = -0x6c;
            goto LAB_1003b028c;
          }
          FUN_1001cad10(local_78,iVar3,&local_59,lVar5,local_60,&local_60);
          local_80 = 0;
          iVar4 = FUN_1005d1e6e(lVar5,(long)local_60,local_59,&local_70);
          if (iVar4 != 0) {
            if (iVar4 != -0x80) {
              uVar8 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar8,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                local_4c = 0x400;
                local_4a = iVar4;
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            FUN_1001c64c1(lVar5);
            goto LAB_1003b02a5;
          }
          local_7c = 0x44;
          FUN_1005d36e5(local_70,0x61777372,&local_7c);
          FUN_1005d36e5(local_70,0x61777470,&local_80);
          FUN_1001ca56d(local_78,&local_64);
          if ((0 < local_64) && (lVar6 = FUN_1001c6429(), lVar6 != 0)) {
            FUN_1001ca421(local_78,lVar6,local_64,&local_64);
            lVar7 = FUN_1001c6429((long)local_60 * 2 + 2);
            local_58 = (undefined4)lVar7;
            uStack_54 = (undefined4)((ulong)lVar7 >> 0x20);
            if (lVar7 != 0) {
              FUN_1001e7237(lVar6,(long)local_64,lVar7,(long)local_64,0);
              FUN_1005d36e5(local_70,0x61776465,&local_58);
            }
            FUN_1001c64c1(lVar6);
          }
          FUN_1005d3b11(param_2,0x7fffffff,local_70);
          if (local_70 != 0) {
            LOCK();
            piVar1 = (int *)(local_70 + 4);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              FUN_1005d25cb();
            }
          }
          FUN_1001c64c1(lVar5);
        }
      } while (iVar3 < local_68);
    }
    iVar4 = 0;
    if (param_4 != (int *)0x0) {
      FUN_1001ca6f8(local_78,param_4);
    }
  }
LAB_1003b02a5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

