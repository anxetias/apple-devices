// rea decompile_all
// name: _zlib_stream_process
// address: 0x5d220
// body: available
// range: 0x5d220-0x5d53a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _zlib_stream_process(long *param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  piVar5 = (int *)param_1[4];
  if (*piVar5 == 1) {
    piVar3 = piVar5 + 0x10050;
    piVar2 = piVar5 + 4;
    *(int **)(piVar5 + 10) = piVar3;
    pvVar4 = (void *)((long)piVar5 + 0x50141);
    *(void **)(piVar5 + 4) = pvVar4;
    do {
      uVar11 = *(ulong *)(piVar5 + 0x1004c);
      if (0x10000 < uVar11) goto LAB_0005d525;
      uVar13 = 0x10000 - uVar11;
      if ((ulong)param_1[3] <= 0x10000 - uVar11) {
        uVar13 = param_1[3];
      }
      _memcpy((void *)(uVar11 + (long)piVar3),(void *)param_1[2],uVar13);
      param_1[2] = param_1[2] + uVar13;
      param_1[3] = param_1[3] - uVar13;
      uVar13 = uVar13 + *(long *)(piVar5 + 0x1004c);
      *(ulong *)(piVar5 + 0x1004c) = uVar13;
      uVar11 = 0x20000 - *(long *)(piVar5 + 0x1004e);
      if ((ulong)param_1[1] <= uVar11) {
        uVar11 = param_1[1];
      }
      lVar10 = *(long *)(piVar5 + 0x1004e) + (long)pvVar4;
      *(long *)(piVar5 + 0x14) = lVar10;
      *(ulong *)(piVar5 + 6) = uVar11;
      *(ulong *)(piVar5 + 0x12) = lVar10 + uVar11;
      if (8 < uVar13) {
        *(ulong *)(piVar5 + 0xc) = uVar13 * 8 + -0x40;
        _zlibDecodeBuffer(piVar2);
        if (piVar5[0x10] == 0xc) goto LAB_0005d525;
        uVar13 = *(ulong *)(piVar5 + 0x1004c);
      }
      _memcpy(piVar5 + 0x8028,piVar2,0x20090);
      *(ulong *)(piVar5 + 0xc) = uVar13 << 3;
      _zlibDecodeBufferSafe(piVar2);
      uVar11 = *(ulong *)(piVar5 + 0xe);
      if ((*(ulong *)(piVar5 + 0xc) < uVar11) || (piVar5[0x10] == 0xc)) {
        _memcpy(piVar2,piVar5 + 0x8028,0x20090);
        uVar11 = *(ulong *)(piVar5 + 0xe);
      }
      if (*(long *)(piVar5 + 6) == 0) {
        uVar13 = (ulong)(uint)~(-1 << ((char)piVar5[0xc] - (char)uVar11 & 0x1fU));
        if (*(ulong *)(piVar5 + 0x22) < uVar13) {
          uVar13 = *(ulong *)(piVar5 + 0x22);
        }
        *(ulong *)(piVar5 + 0x22) = uVar13;
      }
      if (7 < uVar11) {
        if (0x80007 < uVar11) goto LAB_0005d525;
        uVar12 = uVar11 >> 3;
        uVar13 = *(ulong *)(piVar5 + 0x1004c) - uVar12;
        if (*(ulong *)(piVar5 + 0x1004c) < uVar12) goto LAB_0005d525;
        *(ulong *)(piVar5 + 0xe) = (ulong)((uint)uVar11 & 7);
        *(ulong *)(piVar5 + 0x1004c) = uVar13;
        uVar11 = 0x10000 - uVar12;
        if (uVar13 < 0x10000 - uVar12) {
          uVar11 = uVar13;
        }
        _memmove(piVar3,(void *)(uVar12 + (long)piVar3),uVar11);
      }
      uVar11 = *(long *)(piVar5 + 0x14) - (*(long *)(piVar5 + 0x1004e) + (long)pvVar4);
      if (uVar11 == 0) {
        if (*(long *)(piVar5 + 0x1004c) == 0x10000) goto LAB_0005d525;
      }
      else {
        if ((ulong)param_1[1] < uVar11) goto LAB_0005d525;
        _memcpy((void *)*param_1,(void *)(*(long *)(piVar5 + 0x1004e) + (long)pvVar4),uVar11);
        param_1[1] = param_1[1] - uVar11;
        *param_1 = *param_1 + uVar11;
        uVar11 = uVar11 + *(long *)(piVar5 + 0x1004e);
        *(ulong *)(piVar5 + 0x1004e) = uVar11;
        if (0x10000 < uVar11) {
          _memmove(pvVar4,(void *)((long)piVar5 + uVar11 + 0x40141),0x10000);
          piVar5[0x1004e] = 0x10000;
          piVar5[0x1004f] = 0;
        }
      }
    } while (((piVar5[0x10] != 0xb) && (param_1[1] != 0)) && (param_1[3] != 0));
    uVar11 = (ulong)(piVar5[0x10] == 0xb);
  }
  else {
    uVar11 = 0xffffffff;
    if (*piVar5 == 0) {
      puVar1 = (uint *)(piVar5 + 4);
      *puVar1 = *puVar1 | param_2 & 1;
      uVar11 = param_1[3];
      if (0xfffffffe < uVar11) {
        uVar11 = 0xffffffff;
      }
      piVar5[8] = (int)uVar11;
      uVar11 = 0xffffffff;
      if ((ulong)param_1[1] < 0xffffffff) {
        uVar11 = param_1[1];
      }
      piVar5[0xe] = (int)uVar11;
      *(long *)(piVar5 + 6) = param_1[2];
      *(long *)(piVar5 + 0xc) = *param_1;
      iVar9 = _deflate((z_streamp)(piVar5 + 6),(uint)(*puVar1 != 0) << 2);
      lVar10 = *param_1;
      lVar6 = param_1[2];
      lVar7 = *(long *)(piVar5 + 6);
      lVar8 = *(long *)(piVar5 + 0xc);
      param_1[2] = lVar7;
      param_1[3] = param_1[3] + (lVar6 - lVar7);
      *param_1 = lVar8;
      param_1[1] = param_1[1] + (lVar10 - lVar8);
      uVar11 = 0;
      if ((iVar9 != -5) && (iVar9 != 0)) {
        if (iVar9 == 1) {
          _deflateEnd((z_streamp)(piVar5 + 6));
          uVar11 = 1;
        }
        else {
LAB_0005d525:
          uVar11 = 0xffffffff;
        }
      }
    }
  }
  return uVar11;
}

