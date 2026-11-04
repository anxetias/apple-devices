// name: FUN_10014b004
// address: 10014b004

undefined8 FUN_10014b004(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7b04(local_60,"--");
  FUN_1001b7a5c(local_50,local_60);
  FUN_1001bbcfe(local_50,param_1 + 8);
  FUN_1001b7b04(local_40,"\r\nContent-Disposition: form-data; ");
  FUN_1001b7a5c(local_70,local_50);
  FUN_1001bbcfe(local_70,local_40);
  FUN_1001b7a50(local_40);
  FUN_1001b7a50(local_50);
  FUN_1001b7a50(local_60);
  cVar1 = FUN_1001ab326(param_3);
  if (cVar1 == '\0') {
    FUN_1001b7b04(local_40,"name=\"");
    FUN_1001b7a5c(local_60,local_40);
    FUN_1001bbcfe(local_60,param_2);
    FUN_1001b7b04(local_80,"\"\r\n\r\n");
    FUN_1001b7a5c(local_50,local_60);
    FUN_1001bbcfe(local_50,local_80);
    FUN_1001bbcfe(local_70,local_50);
    FUN_1001b7a50(local_50);
    FUN_1001b7a50(local_80);
    FUN_1001b7a50(local_60);
    FUN_1001b7a50(local_40);
    cVar1 = FUN_1001ab2a2(param_3);
    if (cVar1 == '\0') {
      cVar1 = FUN_1001ab2fa(param_3);
      if (cVar1 == '\0') {
        cVar1 = FUN_1001ab2ce(param_3);
        if (cVar1 == '\0') {
          cVar1 = FUN_1001ab24a(param_3);
          if (cVar1 == '\0') {
            FUN_1001bb78a(local_50,"%@",*param_3);
            FUN_1001bbcfe(local_70,local_50);
            FUN_1001b7a50(local_50);
          }
          else {
            FUN_1001ab042(local_60,param_3);
            FUN_1001b7f2a(local_50,local_60);
            FUN_1001bbcfe(local_70,local_50);
            FUN_1001b7a50(local_50);
            FUN_1001ab006(local_60);
          }
        }
        else {
          FUN_1001a8c1c(local_40,param_3);
          FUN_1001a7a6e(local_60,local_40,1);
          FUN_1001a7eda(local_50,local_60);
          FUN_1001bbcfe(local_70,local_50);
          FUN_1001b7a50(local_50);
          FUN_1001a7a94(local_60);
          FUN_1001ab240(local_40);
        }
      }
      else {
        FUN_1001a8fb6(local_60,param_3);
        FUN_1001a9a2a(local_50,local_60);
        FUN_1001bbcfe(local_70,local_50);
        FUN_1001b7a50(local_50);
        FUN_1001a8fac(local_60);
      }
    }
    else {
      FUN_1001a8c1c(local_60,param_3);
      FUN_1001a8cb6(local_50,local_60);
      FUN_1001bbcfe(local_70,local_50);
      FUN_1001b7a50(local_50);
      FUN_1001a8c12(local_60);
    }
    uVar2 = FUN_1001b83ae(local_70);
    uVar3 = FUN_1001b83f0(local_70);
    FUN_1001a8772(param_1 + 0x18,uVar2,uVar3);
  }
  else {
    FUN_1001b7b04(local_40,"name=\"");
    FUN_1001b7a5c(local_60,local_40);
    FUN_1001bbcfe(local_60,param_2);
    FUN_1001b7b04(local_80,"\"\r\nContent-Type: application/octet-stream\r\n\r\n");
    FUN_1001b7a5c(local_50,local_60);
    FUN_1001bbcfe(local_50,local_80);
    FUN_1001bbcfe(local_70,local_50);
    FUN_1001b7a50(local_50);
    FUN_1001b7a50(local_80);
    FUN_1001b7a50(local_60);
    FUN_1001b7a50(local_40);
    uVar2 = FUN_1001b83ae(local_70);
    uVar3 = FUN_1001b83f0(local_70);
    FUN_1001a8772(param_1 + 0x18,uVar2,uVar3);
    FUN_1001a7b5a(local_50,param_3);
    uVar2 = FUN_1001a8626(local_50);
    uVar3 = FUN_1001a8610(local_50);
    FUN_1001a8772(param_1 + 0x18,uVar2,uVar3);
    FUN_1001a85d4(local_50);
  }
  FUN_1001a8772(param_1 + 0x18,"\r\n",2);
  FUN_1001b7a50(local_70);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_10082cb58 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

