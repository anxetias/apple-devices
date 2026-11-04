// name: FUN_100136910
// address: 100136910

void FUN_100136910(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  double *pdVar3;
  cfstringStruct ***pppcVar4;
  double dVar5;
  cfstringStruct *local_130;
  long local_128;
  cfstringStruct **local_118 [2];
  cfstringStruct **local_108 [2];
  undefined1 local_f8 [8];
  double local_f0 [2];
  undefined1 local_e0 [8];
  double local_d8;
  double local_d0 [2];
  undefined1 local_c0 [24];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  double local_78;
  cfstringStruct *local_70 [2];
  cfstringStruct **local_60 [2];
  undefined1 local_50 [24];
  char local_38;
  
  if (*param_2 == 0) {
    local_130 = &cf_token;
    FUN_1001a7b90(local_d0);
    FUN_1001b7a44(local_118);
    FUN_1001b7a44(local_60);
    cVar2 = FUN_1001a944e(param_3,local_d0,local_60);
    pppcVar4 = local_118;
    if (cVar2 != '\0') {
      pppcVar4 = local_60;
    }
    FUN_1001b7a5c(local_108,pppcVar4);
    FUN_1001b7a50(local_60);
    FUN_1001b7a50(local_118);
    FUN_1001ab240(local_d0);
    cVar2 = FUN_1001b8428(local_108);
    if (cVar2 == '\0') {
      FUN_1001b7b04(local_60,".");
      FUN_1001bb188(&local_130,local_108,local_60);
      FUN_1001b7a50(local_60);
      if (local_128 - (long)local_130 == 0x30) {
        FUN_1001352d4(local_f0);
        FUN_1001a85ae(local_60,local_f0,0);
        FUN_1001aa022(local_a8,local_60);
        FUN_1001a85d4(local_60);
        local_70[0] = &cf_exp;
        FUN_1001a7b90(local_60);
        cVar2 = FUN_1001a98e2(local_a8,local_60,local_d0);
        local_78 = local_d0[0];
        if (cVar2 == '\0') {
          local_78 = 0.0;
        }
        FUN_1001ab240(local_60);
        local_70[0] = &cf_iat;
        FUN_1001a7b90(local_60);
        cVar2 = FUN_1001a98e2(local_a8,local_60,local_d0);
        if (cVar2 == '\0') {
          local_d0[0] = 0.0;
        }
        local_d8 = local_d0[0];
        FUN_1001ab240(local_60);
        if (((local_78 == DAT_100701af0) && (!NAN(local_78) && !NAN(DAT_100701af0))) ||
           ((local_d8 == 0.0 && (!NAN(local_d8))))) {
          FUN_1001b7b04(local_d0,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
          FUN_1001b7b04(local_70,"Error parsing token from response. Invalid expiration.");
          FUN_1001b7a44(local_88);
          FUN_1001b7a44(local_98);
          FUN_1001aa318(local_f8);
          FUN_1001aaaac(local_e0,local_d0,0x1d5a,local_70,local_88,local_98,local_f8);
          local_60[0] = (cfstringStruct **)((ulong)local_60[0] & 0xffffffffffffff00);
          local_38 = '\0';
          plVar1 = *(long **)(param_1 + 0x30);
          if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10016bf14();
          }
          (**(code **)(*plVar1 + 0x30))(plVar1,local_e0,local_60);
          if (local_38 == '\x01') {
            FUN_1001a8c12(local_50);
            FUN_1001b7a50(local_60);
          }
          FUN_1001aaad2(local_e0);
          FUN_1001aaad2(local_f8);
          FUN_1001b7a50(local_98);
          FUN_1001b7a50(local_88);
          FUN_1001b7a50(local_70);
          FUN_1001b7a50(local_d0);
        }
        else {
          dVar5 = (double)FUN_1001711e2();
          local_78 = local_78 - local_d8;
          FUN_1001a8bd4(dVar5 + local_78,local_88);
          FUN_1001b7a5c(local_70,local_108);
          FUN_1001a8c1c(local_98,local_88);
          FUN_1001323ee(local_78,local_d0,local_70,local_98,1);
          FUN_1001370aa(local_60,local_d0);
          plVar1 = *(long **)(param_1 + 0x30);
          if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10016bf14();
          }
          (**(code **)(*plVar1 + 0x30))(plVar1,param_2,local_60);
          if (local_38 == '\x01') {
            FUN_1001a8c12(local_50);
            FUN_1001b7a50(local_60);
          }
          FUN_1001a8c12(local_c0);
          FUN_1001b7a50(local_d0);
          FUN_1001a8c12(local_98);
          FUN_1001b7a50(local_70);
          FUN_1001a8c12(local_88);
        }
        FUN_1001a8fac(local_a8);
        pdVar3 = local_f0;
      }
      else {
        FUN_1001b7b04(local_d0,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
        FUN_1001b7b04(local_f0,"Error parsing token from response. Cannot split token.");
        FUN_1001b7a44(local_a8);
        FUN_1001b7a44(local_70);
        FUN_1001aa318(local_98);
        FUN_1001aaaac(local_88,local_d0,0x1d5a,local_f0,local_a8,local_70,local_98);
        local_60[0] = (cfstringStruct **)((ulong)local_60[0] & 0xffffffffffffff00);
        local_38 = '\0';
        plVar1 = *(long **)(param_1 + 0x30);
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10016bf14();
        }
        (**(code **)(*plVar1 + 0x30))(plVar1,local_88,local_60);
        if (local_38 == '\x01') {
          FUN_1001a8c12(local_50);
          FUN_1001b7a50(local_60);
        }
        FUN_1001aaad2(local_88);
        FUN_1001aaad2(local_98);
        FUN_1001b7a50(local_70);
        FUN_1001b7a50(local_a8);
        FUN_1001b7a50(local_f0);
        pdVar3 = local_d0;
      }
      FUN_1001b7a50(pdVar3);
      local_60[0] = &local_130;
      FUN_1001370f4();
    }
    pppcVar4 = local_108;
  }
  else {
    local_60[0] = (cfstringStruct **)((ulong)local_60[0] & 0xffffffffffffff00);
    local_38 = '\0';
    plVar1 = *(long **)(param_1 + 0x30);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10016bf14();
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,local_60);
    if (local_38 != '\x01') {
      return;
    }
    FUN_1001a8c12(local_50);
    pppcVar4 = local_60;
  }
  FUN_1001b7a50(pppcVar4);
  return;
}

