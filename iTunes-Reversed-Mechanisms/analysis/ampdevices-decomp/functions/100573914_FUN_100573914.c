// name: FUN_100573914
// address: 100573914

undefined8 FUN_100573914(long *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_110 [40];
  undefined1 local_e8 [40];
  undefined1 local_c0 [40];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_78;
  long *local_70;
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = 0;
  local_60 = 0;
  *param_2 = 0;
  local_78 = param_1[8];
  local_98 = (undefined4)param_1[4];
  uStack_94 = *(undefined4 *)((long)param_1 + 0x24);
  uStack_90 = (undefined4)param_1[5];
  uStack_8c = *(undefined4 *)((long)param_1 + 0x2c);
  local_88 = (undefined4)param_1[6];
  uStack_84 = *(undefined4 *)((long)param_1 + 0x34);
  uStack_80 = (undefined4)param_1[7];
  uStack_7c = *(undefined4 *)((long)param_1 + 0x3c);
  cVar1 = (**(code **)(*param_1 + 0xc0))(param_1,&local_98,0,local_c0,&local_68);
  if (cVar1 != '\0') {
    local_70 = param_2;
    do {
      FUN_1001c62d9(local_110,0x28);
      FUN_1001c62d9(local_e8,0x28);
      iVar2 = (**(code **)(*param_1 + 200))(param_1,local_c0);
      if (iVar2 < 0x736f756e) {
        if (iVar2 != 0) {
          if (iVar2 == 0x636c6370) {
            cVar1 = (**(code **)(*param_1 + 0xb0))(param_1,local_c0,local_110,local_e8,0);
            goto LAB_100573a51;
          }
LAB_100573a1f:
          (**(code **)(*param_1 + 0xb8))(param_1,local_c0,local_110,local_e8,0);
        }
      }
      else {
        if (iVar2 == 0x736f756e) {
          cVar1 = (**(code **)(*param_1 + 0xa0))(param_1,local_c0,local_110,local_e8,0);
        }
        else {
          if (iVar2 != 0x76696465) goto LAB_100573a1f;
          cVar1 = (**(code **)(*param_1 + 0xa8))(param_1,local_c0,local_110,local_e8,0);
        }
LAB_100573a51:
        if (cVar1 != '\0') {
          uVar3 = (**(code **)(*param_1 + 0xd8))(param_1,local_c0);
          (**(code **)(*param_1 + 0x90))(param_1,&local_60,uVar3,local_110,local_e8);
        }
      }
      cVar1 = (**(code **)(*param_1 + 0xc0))(param_1,&local_98,local_68,local_c0);
    } while (cVar1 != '\0');
    if (local_60 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      lVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      if (lVar4 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "dict != __null";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar5 = 0xffffff94;
      }
      else {
        FUN_1001714de(lVar4,PTR_cf_sinfs_1008529f0,local_60);
        *local_70 = lVar4;
      }
    }
  }
  FUN_10017060f(local_60);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

