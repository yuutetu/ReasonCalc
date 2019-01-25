open BsReactNative;

/* here we define some styles */
module Styles = {
  open Style;

  let container =
    style([
      flex(1.),
      justifyContent(Center),
      alignItems(Stretch),
      backgroundColor(String("white")),
    ]);

  let text = style([
    color(String("#000")),
    fontSize(Float(24.)),
    textAlign(Center),
    padding(Pt(20.))
  ]);

  let buttonContainer = style([
    color(String("#f00")),
    backgroundColor(String("gray")),
    flexDirection(Column)
  ]);

  let buttonRow = style([
    flexDirection(Row)
  ]);

  let buttonItem = style([
    color(String("#000")),
    fontSize(Float(24.)),
    textAlign(Center),
    textAlignVertical(Center),
    backgroundColor(String("white")),
    aspectRatio(1.),
    flex(1.),
    margin(Pt(1.))
  ]);
};

module Main = {
  let component = ReasonReact.statelessComponent("Main");

  let make = _children => {
    ...component,
    render: _self =>
      <View style=Styles.container>
        <Text style=Styles.text>
          (ReasonReact.string("Let's play with ReasonML!"))
        </Text>
        <View style = Styles.buttonContainer>
            <View style = Styles.buttonRow>
                <Text style=Styles.buttonItem></Text>
                <Text style=Styles.buttonItem></Text>
                <Text style=Styles.buttonItem>(ReasonReact.string("C"))</Text>
                <Text style=Styles.buttonItem>(ReasonReact.string("AC"))</Text>
            </View>
            <View style = Styles.buttonRow>
                <Text style=Styles.buttonItem>(ReasonReact.string("7"))</Text>
                <Text style=Styles.buttonItem>(ReasonReact.string("8"))</Text>
                <Text style=Styles.buttonItem>(ReasonReact.string("9"))</Text>
                <Text style=Styles.buttonItem>(ReasonReact.string("*"))</Text>
            </View>
            <View style = Styles.buttonRow>
                <Text style=Styles.buttonItem>(ReasonReact.string("4"))</Text>
                <Text style=Styles.buttonItem>(ReasonReact.string("5"))</Text>
                <Text style=Styles.buttonItem>(ReasonReact.string("6"))</Text>
                <Text style=Styles.buttonItem>(ReasonReact.string("/"))</Text>
            </View>
            <View style = Styles.buttonRow>
                <Text style=Styles.buttonItem>(ReasonReact.string("1"))</Text>
                <Text style=Styles.buttonItem>(ReasonReact.string("2"))</Text>
                <Text style=Styles.buttonItem>(ReasonReact.string("3"))</Text>
                <Text style=Styles.buttonItem>(ReasonReact.string("-"))</Text>
            </View>
            <View style = Styles.buttonRow>
                <Text style=Styles.buttonItem>(ReasonReact.string("0"))</Text>
                <Text style=Styles.buttonItem>(ReasonReact.string("."))</Text>
                <Text style=Styles.buttonItem>(ReasonReact.string("="))</Text>
                <Text style=Styles.buttonItem>(ReasonReact.string("+"))</Text>
            </View>
        </View>
      </View>,
  };
};

let app = () => <Main />;
