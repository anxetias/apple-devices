// name: FUN_10013f0a8
// address: 10013f0a8

void FUN_10013f0a8(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long local_e8 [6];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  cfstringStruct *local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  cfstringStruct *local_70;
  undefined8 local_68;
  long *local_60;
  undefined1 *local_58;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = (**(code **)(*param_1 + 0x38))();
  if (1 < iVar3 - 1U) {
    if (iVar3 == 3) {
      if (param_1[0x20] == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_10014a414(uVar4);
        }
        FUN_1001782e9(0,1);
      }
      FUN_1001b7b04(&local_68,DAT_1008c4d28);
      FUN_10013bada(&local_88,param_1[0x20]);
      (**(code **)(*param_2 + 0x10))(param_2,&local_68,&local_88);
      FUN_1001b7a50(&local_88);
      FUN_1001b7a50(&local_68);
    }
    goto LAB_10013f590;
  }
  (**(code **)(*param_1 + 0x120))(local_e8 + 4,param_1,param_3);
  if ((iVar3 == 2) || (local_e8[4] != 0)) {
    if (param_1[0x20] == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_10014a48a(uVar4);
      }
      FUN_1001782e9(0,1);
    }
    FUN_10032f0f2(local_b8);
    iVar3 = (**(code **)(*param_1 + 0x80))(param_1);
    if ((((iVar3 == 0) || (iVar3 = (**(code **)(*param_1 + 0x80))(param_1), iVar3 == 1)) ||
        (iVar3 = (**(code **)(*param_1 + 0x80))(param_1), iVar3 == 3)) ||
       (iVar3 = (**(code **)(*param_1 + 0x80))(param_1), iVar3 == 4)) {
      if (local_e8[4] != 0) {
        local_70 = &cf_headers;
        FUN_1001a7b90(local_a8);
        local_e8[0] = 0;
        local_e8[1] = 0;
        FUN_10032f0f2(local_e8);
        FUN_10032f0f2(&local_68);
        cVar1 = FUN_1001484cc(local_e8 + 4,local_a8,&local_68);
        plVar7 = local_e8;
        if (cVar1 != '\0') {
          plVar7 = &local_68;
        }
        FUN_1001a7a9e(&local_98,plVar7);
        FUN_1001a7a94(&local_68);
        local_68 = &PTR_FUN_10083a990;
        local_58 = local_b8;
        local_60 = param_2;
        local_48 = &local_68;
        local_80 = FUN_1001a7bfa(&local_98);
        local_88 = 0;
        FUN_100148586(&local_98,&local_88,&local_68);
        if (local_48 == &local_68) {
          lVar5 = 0x20;
LAB_10013f31f:
          (**(code **)(*local_48 + lVar5))();
        }
        else {
          lVar5 = 0x28;
          if (local_48 != (long *)0x0) goto LAB_10013f31f;
        }
        FUN_1001a7a94(&local_98);
        FUN_1001a7a94(local_e8);
        FUN_1001ab240(local_a8);
        FUN_1001b7b04(&local_68,"");
        FUN_1001ab6d2(&local_88,param_3,&local_68);
        FUN_1001b7a50(&local_68);
        if (local_88 != local_80) {
          FUN_1001a7b90(&local_70);
          local_e8[2] = 0;
          local_e8[3] = 0;
          FUN_10032f0f2(local_e8 + 2);
          FUN_10032f0f2(&local_68);
          cVar1 = FUN_1001484cc(local_e8 + 4,&local_70,&local_68);
          plVar7 = local_e8 + 2;
          if (cVar1 != '\0') {
            plVar7 = &local_68;
          }
          FUN_1001a7a9e(local_a8,plVar7);
          FUN_1001a7a94(&local_68);
          local_68 = &PTR_FUN_10083aa20;
          local_60 = &local_88;
          local_58 = local_b8;
          local_48 = &local_68;
          local_90 = FUN_1001a7bfa(local_a8);
          local_98 = (cfstringStruct *)0x0;
          FUN_100148586(local_a8,&local_98,&local_68);
          if (local_48 == &local_68) {
            lVar5 = 0x20;
LAB_10013f45a:
            (**(code **)(*local_48 + lVar5))();
          }
          else {
            lVar5 = 0x28;
            if (local_48 != (long *)0x0) goto LAB_10013f45a;
          }
          FUN_1001a7a94(local_a8);
          FUN_1001a7a94(local_e8 + 2);
          FUN_1001ab240(&local_70);
        }
        local_98 = &cf_path;
        FUN_1001a7b90(&local_68);
        bVar2 = FUN_1001a957a(local_e8 + 4,&local_68,&local_70);
        bVar2 = bVar2 & (byte)local_70;
        FUN_1001ab240(&local_68);
        if (bVar2 == 1) {
          FUN_1001ab5d0(&local_98,param_3);
          FUN_1001a85ae(&local_68,&local_98,3);
          FUN_1001a871e(local_b8,&local_68);
          FUN_1001a85d4(&local_68);
          FUN_1001b7a50(&local_98);
        }
        local_68 = (undefined **)&local_88;
        FUN_100147e82();
      }
    }
    else {
      uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
      if ((uVar6 & 1) == 0) {
        FUN_1001a7ad8(local_b8,param_4);
      }
      else {
        local_68 = (undefined **)(((ulong)local_68 >> 8 & 0xffffff) << 8);
        FUN_10017991d(2,*param_4);
        FUN_1001a833e(&local_88,&local_60,local_68._4_4_,0);
        FUN_1001a7b1c(local_b8,&local_88);
        FUN_1001a85d4(&local_88);
      }
    }
    FUN_10013bb86(&local_68,param_1[0x20],local_b8);
    cVar1 = FUN_1001b8428(&local_68);
    if (cVar1 == '\0') {
      FUN_1001b7b04(&local_88,DAT_1008c4d28);
      (**(code **)(*param_2 + 0x10))(param_2,&local_88,&local_68);
      FUN_1001b7a50(&local_88);
    }
    FUN_1001b7a50(&local_68);
    FUN_1001a85d4(local_b8);
  }
  FUN_1001a8fac(local_e8 + 4);
LAB_10013f590:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

