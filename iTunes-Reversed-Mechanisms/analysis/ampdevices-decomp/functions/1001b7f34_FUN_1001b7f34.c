// name: FUN_1001b7f34
// address: 1001b7f34

void FUN_1001b7f34(undefined8 *param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  char cVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 local_40 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != 0 && param_2 != (void *)0x0) {
    if ((int)param_4 == 0x100) {
      if ((param_3 & 1) != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006a1688(uVar3);
        }
        FUN_1001782e9(0,0);
      }
      uVar6 = param_3 & 0xfffffffffffffffe;
      puVar2 = operator_new(uVar6 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
      *puVar2 = param_3 >> 1;
      *(undefined4 *)(puVar2 + 1) = 1;
      *(undefined2 *)((long)puVar2 + uVar6 + 0xc) = 0;
      _memcpy((void *)((long)puVar2 + 0xc),param_2,uVar6);
      *param_1 = puVar2;
    }
    else if ((int)param_4 == 0x8000100) {
      puVar2 = operator_new(param_3 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
      *puVar2 = param_3;
      *(undefined4 *)(puVar2 + 1) = 1;
      *(undefined1 *)((long)puVar2 + param_3 + 0xc) = 0;
      _memcpy((void *)((long)puVar2 + 0xc),param_2,param_3);
      param_1[1] = puVar2;
    }
    else {
      lVar4 = FUN_100173ab4(0,param_2,param_3,param_4,1);
      if (lVar4 == 0) {
        puVar5 = operator_new(0x12,(nothrow_t *)PTR_nothrow_10082c970);
        *puVar5 = 1;
        puVar5[1] = 0xfffd00000001;
        *param_1 = puVar5;
      }
      else {
        FUN_1001b7e36(local_40,lVar4);
        FUN_1001b80b2(param_1,local_40);
        FUN_1001b811c(local_40);
        FUN_10017060f(lVar4);
      }
    }
  }
  return;
}

