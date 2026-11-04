// name: FUN_100546bdf
// address: 100546bdf

bool FUN_100546bdf(long param_1)

{
  undefined *puVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [16];
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  undefined1 local_250 [16];
  undefined1 local_240 [23];
  char local_229;
  undefined **local_228 [64];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_260);
  FUN_1001b7a44(local_2a0);
  FUN_1004fda52(local_2d0,*(undefined4 *)(param_1 + 0x28));
  FUN_1004f0e83(param_1,local_228);
  FUN_1001b8dfc(local_290,local_228);
  FUN_10053877e(local_280);
  FUN_1001b7a44(local_250);
  FUN_10015805a(local_228);
  local_228[0] = &PTR_FUN_100854ac0;
  FUN_100247d24(local_270,param_1 + 0x438);
  cVar2 = FUN_1001b8428(local_270);
  if (cVar2 == '\0') {
    uVar4 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc0221);
    FUN_1001b81f2(local_250,uVar4);
    FUN_1001bc048(local_240,local_250,local_290,local_280,local_270);
    FUN_1001b80b2(local_260,local_240);
  }
  else {
    uVar4 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc0220);
    FUN_1001b81f2(local_250,uVar4);
    FUN_1001bbf68(local_240,local_250,local_290,local_280);
    FUN_1001b80b2(local_260,local_240);
  }
  FUN_1001b7a50(local_240);
  uVar4 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc0222);
  FUN_1001b81f2(local_2a0,uVar4);
  puVar1 = PTR_cf_dontAskSpeechLanguageMisMatch_100854a68;
  local_229 = FUN_10015829e(local_228,PTR_cf_dontAskSpeechLanguageMisMatch_100854a68);
  FUN_1001c334a(local_240,0x5db3000e);
  FUN_1001c334a(local_2c0,0x5db30004);
  FUN_1001c334a(local_2b0,0x5db30014);
  sVar3 = FUN_10044ff08(local_260,local_2a0,local_240,local_2c0,local_2b0,&local_229,local_2d0,0);
  FUN_1001b7a50(local_2b0);
  FUN_1001b7a50(local_2c0);
  FUN_1001b7a50(local_240);
  FUN_100158470(local_228,puVar1,local_229 != '\0');
  FUN_100159630(local_228);
  FUN_1001b7a50(local_270);
  FUN_10015811a(local_228);
  FUN_1001b7a50(local_250);
  FUN_1001b7a50(local_280);
  FUN_1001b7a50(local_290);
  FUN_1001b7a50(local_2d0);
  FUN_1001b7a50(local_2a0);
  FUN_1001b7a50(local_260);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return sVar3 == 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

