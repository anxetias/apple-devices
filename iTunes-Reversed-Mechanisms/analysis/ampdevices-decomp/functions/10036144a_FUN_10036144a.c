// name: FUN_10036144a
// address: 10036144a

undefined8 FUN_10036144a(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  cfstringStruct *local_c0;
  undefined1 local_b8 [16];
  cfstringStruct *local_a8;
  undefined1 local_a0 [16];
  cfstringStruct *local_90;
  undefined1 local_88 [16];
  cfstringStruct *local_78;
  undefined1 local_70 [16];
  cfstringStruct *local_60;
  undefined1 local_58 [16];
  cfstringStruct *local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008bdd58 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008bdd58);
    if (iVar1 != 0) {
      local_c0 = &cf_audibleUserName;
      FUN_1001b7b04(local_b8,"");
      local_a8 = &cf_encoderName;
      FUN_1001b7b04(local_a0,"");
      local_90 = &cf_eqName;
      FUN_1001b7b04(local_88,"");
      local_78 = &cf_visualNameUnicode;
      FUN_1001b7b04(local_70,"");
      local_60 = &cf_previousPlayURL;
      FUN_1001b7b04(local_58,"");
      local_48 = &cf_audioLanguage;
      FUN_1001b7b04(local_40,"");
      FUN_100361d68(&local_c0);
      lVar5 = 0x80;
      do {
        FUN_1001b7a50(local_b8 + lVar5 + -8);
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x10);
      ___cxa_atexit(FUN_10036167e,&DAT_1008bdd40,0x100000000);
      ___cxa_guard_release(&DAT_1008bdd58);
    }
  }
  if (DAT_1008bdd48 != (undefined8 *)0x0) {
    puVar4 = &DAT_1008bdd48;
    puVar2 = DAT_1008bdd48;
    do {
      if ((ulong)puVar2[4] >= param_2) {
        puVar4 = puVar2;
      }
      puVar2 = (undefined8 *)puVar2[(ulong)puVar2[4] < param_2];
    } while (puVar2 != (undefined8 *)0x0);
    if (((undefined8 **)puVar4 != &DAT_1008bdd48) && ((ulong)puVar4[4] <= param_2)) {
      FUN_1001b8172(param_3,puVar4 + 5);
      uVar3 = 1;
      goto LAB_1003614b7;
    }
  }
  uVar3 = 0;
LAB_1003614b7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

