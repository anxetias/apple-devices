// name: FUN_1003618bf
// address: 1003618bf

void FUN_1003618bf(void)

{
  char cVar1;
  long lVar2;
  float fVar3;
  undefined **appuStack_11d98 [32];
  undefined1 auStack_11c94 [2478];
  undefined8 uStack_112e6;
  undefined1 local_cac9;
  undefined8 local_2532;
  undefined1 local_24f4;
  undefined8 local_98;
  long local_18;
  
  lVar2 = FUN_100108310();
  lVar2 = -lVar2;
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_18 + lVar2) = 0x1003618ed;
  FUN_10015805a(appuStack_11d98);
  appuStack_11d98[0] = &PTR_FUN_100854ac0;
  *(undefined8 *)((long)&local_18 + lVar2) = 0x10036190a;
  cVar1 = FUN_10015829e(appuStack_11d98,&cf_ITUserPrefsMigrated);
  if (cVar1 == '\0') {
    *(undefined8 *)((long)&local_18 + lVar2) = 0x10036191e;
    cVar1 = FUN_1002e2fe0(auStack_11c94);
    if (cVar1 != '\0') {
      *(undefined8 *)((long)&local_18 + lVar2) = 0x100361939;
      cVar1 = FUN_10015829e(appuStack_11d98,&cf_ITUserPrefsMigrated);
      if (cVar1 == '\0') {
        *(undefined8 *)((long)&local_18 + lVar2) = 0x10036195b;
        FUN_100158ea6(appuStack_11d98,&cf_featureFlags,local_2532);
        *(undefined8 *)((long)&local_18 + lVar2) = 0x100361975;
        FUN_100158ea6(appuStack_11d98,&cf_persistentUserID,uStack_112e6);
        *(undefined8 *)((long)&local_18 + lVar2) = 0x10036198f;
        FUN_100158ea6(appuStack_11d98,&cf_storeMediaTypeFlags,local_98);
        *(undefined8 *)((long)&local_18 + lVar2) = 0x1003619a9;
        FUN_1001593a8(appuStack_11d98,&cf_storeSupportsCloudPurchases,local_24f4);
        *(undefined8 *)((long)&local_18 + lVar2) = 0x1003619c3;
        FUN_100158b3a(appuStack_11d98,&cf_updateLevel,local_cac9);
        *(undefined8 *)((long)&local_18 + lVar2) = 0x1003619db;
        FUN_100158470(appuStack_11d98,&cf_ITUserPrefsMigrated,1);
        *(undefined8 *)((long)&local_18 + lVar2) = 0x1003619e7;
        FUN_100159630(appuStack_11d98);
      }
    }
  }
  *(undefined8 *)((long)&local_18 + lVar2) = 0x1003619fa;
  cVar1 = FUN_10015829e(appuStack_11d98,&cf_crossfadeEnabled);
  if (cVar1 != '\0') {
    *(undefined8 *)((long)&local_18 + lVar2) = 0x100361a11;
    fVar3 = (float)FUN_100158fde(appuStack_11d98,&cf_crossfadeSeconds);
    if ((fVar3 == 0.0) && (!NAN(fVar3))) {
      *(undefined8 *)((long)&local_18 + lVar2) = 0x100361a30;
      FUN_100158470(appuStack_11d98,&cf_crossfadeEnabled,0);
      *(undefined8 *)((long)&local_18 + lVar2) = 0x100361a4b;
      FUN_1001590fc(DAT_100701d08,appuStack_11d98,&cf_crossfadeSeconds);
      *(undefined8 *)((long)&local_18 + lVar2) = 0x100361a57;
      FUN_100159630(appuStack_11d98);
    }
  }
  *(undefined8 *)((long)&local_18 + lVar2) = 0x100361a63;
  FUN_10015811a(appuStack_11d98);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_18 + lVar2) = &UNK_100361a82;
  ___stack_chk_fail();
}

