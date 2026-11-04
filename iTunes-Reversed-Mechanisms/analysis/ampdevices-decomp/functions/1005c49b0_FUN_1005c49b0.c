// name: FUN_1005c49b0
// address: 1005c49b0

undefined8 FUN_1005c49b0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_110 [32];
  
  FUN_10015805a(local_110);
  local_110[0] = &PTR_FUN_100854ac0;
  lVar1 = FUN_100158c8e(local_110,PTR_cf_persistentUserID_100854a98);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1001736b8(DAT_1008c4d90,0,&cf__016llX,lVar1);
  }
  FUN_10015811a(local_110);
  return uVar2;
}

