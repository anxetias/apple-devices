// name: FUN_1001473cc
// address: 1001473cc

undefined8 FUN_1001473cc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *local_138;
  long local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  long local_70 [3];
  long local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_2 + 0x40) == 0) {
    FUN_10032f0f2(param_1);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      return param_1;
    }
  }
  else {
    local_50 = param_1;
    FUN_1001ab5d0(local_100,param_3);
    FUN_1001ab626(local_f0,param_3);
    FUN_1001a8c1c(&local_78,&PTR_cf_signed_actions_10083a710);
    local_128 = 0;
    uStack_120 = 0;
    FUN_10032f0f2();
    FUN_10012a3d6(local_e0,param_2 + 0x40,&local_78,&local_128);
    FUN_1001a8fac(&local_128);
    FUN_1001ab006(&local_78);
    FUN_100147a46(&local_78,local_e0);
    local_130 = param_2 + 0x40;
    local_90 = FUN_1001a8fea(local_e0);
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_b0 = (long *)local_e0;
    if (local_90 != local_58 || local_e0 != local_78) {
      do {
        lVar1 = local_70[0];
        lVar4 = local_58 * 0x10;
        lVar3 = local_70[0] + lVar4 + 8;
        cVar2 = FUN_1001ab2fa(lVar3);
        if (cVar2 != '\0') {
          FUN_1001b7f2a(&local_48,lVar1 + lVar4);
          cVar2 = FUN_1001ba31c(local_100,&local_48,1);
          FUN_1001b7a50(&local_48);
          if (cVar2 != '\0') {
            FUN_1001a8fb6(&local_48,lVar3);
            FUN_1001aaf14(local_88,local_f0);
            FUN_100147b6e(local_50,&local_48,local_88);
            FUN_1001ab006(local_88);
            FUN_1001a8fac(&local_48);
            local_48 = &local_a8;
            FUN_10014841e(&local_48);
            local_b0 = local_70;
            FUN_10014841e();
            goto LAB_1001476b7;
          }
        }
        local_58 = local_58 + 1;
      } while (((long *)local_78 != local_b0) || (local_58 != local_90));
    }
    local_48 = &local_a8;
    FUN_10014841e();
    local_b0 = local_70;
    FUN_10014841e();
    FUN_1001a8c1c(&local_78,&PTR_cf_sign_sap_request_10083a718);
    local_118 = 0;
    uStack_110 = 0;
    FUN_10032f0f2();
    FUN_10012a3d6(local_88,local_130,&local_78,&local_118);
    FUN_1001a8fac(&local_118);
    FUN_1001ab006(&local_78);
    FUN_100147a46(&local_78,local_88);
    local_90 = FUN_1001a8fea(local_88);
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_b0 = (long *)local_88;
    if ((local_78 != local_88) || (local_58 != local_90)) {
      do {
        lVar1 = local_70[0];
        lVar3 = local_58 * 0x10;
        lVar4 = local_70[0] + lVar3 + 8;
        cVar2 = FUN_1001ab2ce(lVar4);
        if (cVar2 != '\0') {
          FUN_1001b7f2a(&local_48,lVar1 + lVar3);
          cVar2 = FUN_1001ba31c(local_100,&local_48,1);
          FUN_1001b7a50(&local_48);
          if (cVar2 != '\0') {
            FUN_1001a7b5a(local_d0,lVar4);
            FUN_1001aaf14(local_c0,local_f0);
            local_40 = FUN_1001a7bfa(local_d0);
            local_48 = (undefined8 *)0x0;
            cVar2 = FUN_10014a3be(local_d0,local_c0);
            if (cVar2 == '\0') {
              FUN_10032f0f2(local_50);
            }
            else {
              local_138 = &cf_sign;
              FUN_1001a82a6(local_b8,1);
              FUN_100148496(&local_48,&local_138,local_b8);
              FUN_1001a8f52(local_50,&local_48,1);
              FUN_1001ab240(&local_40);
              FUN_1001ab240(&local_48);
              FUN_1001a82e2(local_b8);
            }
            FUN_1001ab006(local_c0);
            FUN_1001a7a94(local_d0);
            local_48 = &local_a8;
            FUN_10014841e();
            local_b0 = local_70;
            FUN_10014841e();
            goto LAB_1001476ae;
          }
        }
        local_58 = local_58 + 1;
      } while (((long *)local_78 != local_b0) || (local_58 != local_90));
    }
    local_48 = &local_a8;
    FUN_10014841e();
    local_b0 = local_70;
    FUN_10014841e();
    FUN_10032f0f2(local_50);
LAB_1001476ae:
    FUN_1001a8fac(local_88);
LAB_1001476b7:
    FUN_1001a8fac(local_e0);
    FUN_1001b7a50(local_f0);
    FUN_1001b7a50(local_100);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      return local_50;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

