// name: FUN_1001a2cbb
// address: 1001a2cbb

undefined1 FUN_1001a2cbb(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  FUN_1001b7a44(local_30);
  iVar2 = _strncasecmp(param_1,"HTTP/1.0",8);
  if (iVar2 == 0) {
    cVar1 = FUN_1001a29f2(param_1,"Accept-Ranges",local_30);
    if (cVar1 != '\0') {
      FUN_1001b7b04(local_20,"bytes");
      iVar2 = FUN_1001b96de(local_30,local_20,0x1b1);
      FUN_1001b7a50(local_20);
      if (iVar2 == 0) goto LAB_1001a2d7e;
    }
LAB_1001a2d7a:
    uVar3 = 0;
  }
  else {
    cVar1 = FUN_1001a29f2(param_1,"Accept-Ranges",local_30);
    if (cVar1 != '\0') {
      FUN_1001b7b04(local_20,"none");
      iVar2 = FUN_1001b96de(local_30,local_20,0x1b1);
      FUN_1001b7a50(local_20);
      if (iVar2 == 0) goto LAB_1001a2d7a;
    }
LAB_1001a2d7e:
    uVar3 = 1;
  }
  FUN_1001b7a50(local_30);
  return uVar3;
}

