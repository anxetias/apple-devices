// name: FUN_1004e116d
// address: 1004e116d

long FUN_1004e116d(void)

{
  undefined *puVar1;
  long lVar2;
  undefined **local_118 [32];
  
  FUN_10015805a(local_118);
  puVar1 = PTR_cf_persistentUserID_100854a98;
  local_118[0] = &PTR_FUN_100854ac0;
  lVar2 = FUN_100158c8e(local_118,PTR_cf_persistentUserID_100854a98);
  if (lVar2 == 0) {
    lVar2 = FUN_1001ea62b(0);
    FUN_100158ea6(local_118,puVar1,lVar2);
    FUN_100159630(local_118);
  }
  FUN_10015811a(local_118);
  return lVar2;
}

