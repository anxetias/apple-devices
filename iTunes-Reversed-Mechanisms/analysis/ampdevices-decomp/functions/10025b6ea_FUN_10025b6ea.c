// name: FUN_10025b6ea
// address: 10025b6ea

bool FUN_10025b6ea(long param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = (**(code **)(*(long *)*param_2 + 0x78))();
  if (lVar2 == 0) {
    bVar3 = false;
  }
  else {
    cVar1 = FUN_100169da8(lVar2,*(undefined8 *)(param_1 + 8));
    bVar3 = cVar1 != '\0';
  }
  return bVar3;
}

