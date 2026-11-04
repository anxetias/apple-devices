// name: FUN_10047edcd
// address: 10047edcd

undefined8 FUN_10047edcd(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_40 [16];
  
  FUN_1001b7a44();
  FUN_10047d1cb(local_40,param_2,PTR_cf_external_guid_100844b48);
  FUN_1001b80b2(param_1,local_40);
  FUN_1001b7a50(local_40);
  cVar1 = FUN_1001b8428(param_1);
  if (cVar1 == '\0') {
    puVar2 = (undefined1 *)FUN_1001b83ae(param_1);
    lVar3 = FUN_1001b83f0(param_1);
    puVar4 = puVar2 + lVar3;
    puVar5 = puVar2;
    if (0 < lVar3) {
      do {
        cVar1 = FUN_1001e68cb(*puVar5);
        if (cVar1 == '\0') break;
        puVar5 = puVar5 + 1;
      } while (puVar5 < puVar4);
    }
    puVar2 = puVar2 + (lVar3 - (long)puVar5);
    do {
      puVar6 = puVar2;
      if (puVar4 <= puVar5) break;
      cVar1 = FUN_1001e68cb(puVar4[-1]);
      puVar4 = puVar4 + -1;
      puVar2 = puVar6 + -1;
    } while (cVar1 != '\0');
    FUN_1001b8110(local_40,puVar5,puVar6,0x8000100);
    FUN_1001b80b2(param_1,local_40);
    FUN_1001b7a50(local_40);
  }
  return param_1;
}

