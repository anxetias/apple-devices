// name: FUN_1001bb856
// address: 1001bb856

bool FUN_1001bb856(long *param_1,long param_2)

{
  char cVar1;
  undefined2 *puVar2;
  undefined8 uVar4;
  bool bVar5;
  long local_28;
  long lVar3;
  
  if (param_2 == 0) {
    return false;
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    puVar2 = &DAT_100711b00;
    if (param_1[1] == 0) goto LAB_1001bb87a;
    FUN_1001b8454(param_1);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_1001bb87a;
  }
  puVar2 = (undefined2 *)(lVar3 + 0xc);
LAB_1001bb87a:
  uVar4 = FUN_1001b8378(param_1);
  bVar5 = false;
  local_28 = FUN_1001735df(0,puVar2,uVar4,*(undefined8 *)PTR__kCFAllocatorNull_10082e028);
  if (local_28 != 0) {
    cVar1 = FUN_1001672b9(local_28,param_2);
    bVar5 = cVar1 != '\0';
  }
  FUN_10014d890(&local_28);
  return bVar5;
}

