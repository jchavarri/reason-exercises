open Jest;

describe("RiverGap", () =>
  Expect.(
    test("to work with sample 1", () =>
      expect(RiverGap.(solution([Land, Water, Water, Land]))) |> toBe(2)
    )
  )
);

describe("RiverGap", () =>
  Expect.(
    test("to work with sample 2", () =>
      expect(
        RiverGap.(
          solution([
            Land,
            Water,
            Water,
            Water,
            Water,
            Land,
            Water,
            Water,
            Water,
            Land,
          ])
        ),
      )
      |> toBe(4)
    )
  )
);