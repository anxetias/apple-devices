// rea decompile_all
// name: _deflateCopy
// address: 0x8fae4
// body: available
// range: 0x8fae4-0x8fcd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _deflateCopy(z_streamp dest,z_streamp source)

{
  uint uVar1;
  internal_state *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uInt uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  Bytef *pBVar12;
  uLong uVar13;
  uLong uVar14;
  uInt uVar15;
  undefined4 uVar16;
  internal_state *piVar17;
  voidpf pvVar18;
  int iVar19;
  
  iVar19 = -2;
  if ((dest != (z_streamp)0x0 && source != (z_streamp)0x0) &&
     (piVar2 = source->state, piVar2 != (internal_state *)0x0)) {
    iVar19 = source->data_type;
    uVar3 = *(undefined4 *)&source->field_0x5c;
    dest->opaque = source->opaque;
    dest->data_type = iVar19;
    *(undefined4 *)&dest->field_0x5c = uVar3;
    uVar13 = source->reserved;
    dest->adler = source->adler;
    dest->reserved = uVar13;
    pBVar12 = source->next_in;
    uVar15 = source->avail_in;
    uVar16 = *(undefined4 *)&source->field_0xc;
    uVar13 = source->total_in;
    uVar3 = *(undefined4 *)((long)&source->total_in + 4);
    uVar4 = *(undefined4 *)&source->next_out;
    uVar5 = *(undefined4 *)((long)&source->next_out + 4);
    uVar6 = source->avail_out;
    uVar7 = *(undefined4 *)&source->field_0x24;
    uVar14 = source->total_out;
    uVar8 = *(undefined4 *)((long)&source->total_out + 4);
    uVar9 = *(undefined4 *)((long)&source->msg + 4);
    uVar10 = *(undefined4 *)&source->state;
    uVar11 = *(undefined4 *)((long)&source->state + 4);
    *(undefined4 *)&dest->msg = *(undefined4 *)&source->msg;
    *(undefined4 *)((long)&dest->msg + 4) = uVar9;
    *(undefined4 *)&dest->state = uVar10;
    *(undefined4 *)((long)&dest->state + 4) = uVar11;
    dest->avail_out = uVar6;
    *(undefined4 *)&dest->field_0x24 = uVar7;
    *(int *)&dest->total_out = (int)uVar14;
    *(undefined4 *)((long)&dest->total_out + 4) = uVar8;
    *(int *)&dest->total_in = (int)uVar13;
    *(undefined4 *)((long)&dest->total_in + 4) = uVar3;
    *(undefined4 *)&dest->next_out = uVar4;
    *(undefined4 *)((long)&dest->next_out + 4) = uVar5;
    dest->next_in = pBVar12;
    dest->avail_in = uVar15;
    *(undefined4 *)&dest->field_0xc = uVar16;
    uVar3 = *(undefined4 *)((long)&source->zalloc + 4);
    uVar4 = *(undefined4 *)&source->zfree;
    uVar5 = *(undefined4 *)((long)&source->zfree + 4);
    *(undefined4 *)&dest->zalloc = *(undefined4 *)&source->zalloc;
    *(undefined4 *)((long)&dest->zalloc + 4) = uVar3;
    *(undefined4 *)&dest->zfree = uVar4;
    *(undefined4 *)((long)&dest->zfree + 4) = uVar5;
    piVar17 = (*dest->zalloc)(dest->opaque,1,0x1730);
    iVar19 = -4;
    if (piVar17 != (internal_state *)0x0) {
      dest->state = piVar17;
      _memcpy(piVar17,piVar2,0x1730);
      *(z_streamp *)piVar17 = dest;
      pvVar18 = (*dest->zalloc)(dest->opaque,piVar17[0x11].dummy,2);
      *(voidpf *)(piVar17 + 0x14) = pvVar18;
      pvVar18 = (*dest->zalloc)(dest->opaque,piVar17[0x11].dummy,2);
      *(voidpf *)(piVar17 + 0x18) = pvVar18;
      pvVar18 = (*dest->zalloc)(dest->opaque,piVar17[0x1d].dummy,2);
      *(voidpf *)(piVar17 + 0x1a) = pvVar18;
      pvVar18 = (*dest->zalloc)(dest->opaque,piVar17[0x5be].dummy,4);
      *(voidpf *)(piVar17 + 4) = pvVar18;
      if (((*(void **)(piVar17 + 0x14) == (void *)0x0) || (*(long *)(piVar17 + 0x18) == 0)) ||
         (pvVar18 == (voidpf)0x0 || *(long *)(piVar17 + 0x1a) == 0)) {
        _deflateEnd(dest);
      }
      else {
        _memcpy(*(void **)(piVar17 + 0x14),*(void **)(piVar2 + 0x14),
                (ulong)(uint)(piVar17[0x11].dummy * 2));
        _memcpy(*(void **)(piVar17 + 0x18),*(void **)(piVar2 + 0x18),
                (ulong)(uint)piVar17[0x11].dummy * 2);
        _memcpy(*(void **)(piVar17 + 0x1a),*(void **)(piVar2 + 0x1a),
                (ulong)(uint)piVar17[0x1d].dummy * 2);
        _memcpy(*(void **)(piVar17 + 4),*(void **)(piVar2 + 4),(ulong)(uint)piVar17[6].dummy);
        *(long *)(piVar17 + 8) =
             (*(long *)(piVar2 + 8) - *(long *)(piVar2 + 4)) + *(long *)(piVar17 + 4);
        uVar1 = piVar17[0x5be].dummy;
        *(ulong *)(piVar17 + 0x5c0) = (long)pvVar18 + (ulong)(uVar1 & 0xfffffffe);
        *(ulong *)(piVar17 + 0x5bc) = (ulong)uVar1 * 3 + *(long *)(piVar17 + 4);
        *(internal_state **)(piVar17 + 0x2d2) = piVar17 + 0x31;
        *(internal_state **)(piVar17 + 0x2d8) = piVar17 + 0x26e;
        *(internal_state **)(piVar17 + 0x2de) = piVar17 + 0x2ab;
        iVar19 = 0;
      }
    }
  }
  return iVar19;
}

