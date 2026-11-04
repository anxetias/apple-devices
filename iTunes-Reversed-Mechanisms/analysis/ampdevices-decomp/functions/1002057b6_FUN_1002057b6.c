// name: FUN_1002057b6
// address: 1002057b6

bool FUN_1002057b6(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x691) == '\0') {
    lVar2 = 0;
    do {
      cVar1 = FUN_1001e4e7c(*(undefined8 *)((long)&PTR_s_IC_Info_sidb_10083d4f0 + lVar2),param_2,1);
      if (cVar1 != '\0') {
        return false;
      }
      lVar2 = lVar2 + 8;
    } while (lVar2 != 0x28);
  }
  bVar3 = true;
  if (*(char *)(param_1 + 0x692) == '\0') {
    lVar2 = 0;
    do {
      cVar1 = FUN_1001e4e7c((long)&DAT_1007125e0 + (long)*(int *)((long)&DAT_1007125e0 + lVar2),
                            param_2,1);
      bVar3 = cVar1 == '\0';
      if (!bVar3) {
        return bVar3;
      }
      bVar4 = lVar2 != 0x1c;
      lVar2 = lVar2 + 4;
    } while (bVar4);
  }
  return bVar3;
}

