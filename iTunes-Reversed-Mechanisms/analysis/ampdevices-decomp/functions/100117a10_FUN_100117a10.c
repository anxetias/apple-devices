// name: FUN_100117a10
// address: 100117a10

void FUN_100117a10(uint *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  *param_1 = param_2;
  if (param_3 == 0) {
    uVar3 = 0xd;
    puVar1 = (uint *)&DAT_1007041b0;
    do {
      uVar4 = uVar3 >> 1;
      uVar5 = ~uVar4 + uVar3;
      uVar3 = uVar4;
      if (param_2 < puVar1[uVar4]) {
        puVar1 = puVar1 + uVar4 + 1;
        uVar3 = uVar5;
      }
    } while (uVar3 != 0);
    if ((*puVar1 != param_2) || (0xc < (uint)((ulong)(puVar1 + -0x401c106c) >> 2))) {
      puVar2 = (undefined8 *)___cxa_allocate_exception(8);
      *puVar2 = "Error in MP4SampleRate::MP4SampleRate(): sample rate value not allowed";
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar2,PTR_typeinfo_10082c990,0);
    }
  }
  return;
}

